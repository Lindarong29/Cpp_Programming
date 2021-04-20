/* 
        7. ������ ���� ����� ������ �����ϴ� ���� Ŭ���� MyIntStack�� �����϶�.
            MyIntStack ���ÿ� ������ �� �ִ� ������ �ִ� ������ 10�̴�.
            MyIntStack Ŭ������ Ȱ���ϴ� �ڵ�� ���� ����� ������ ����.

            - MyIntStack Ŭ������ main()�Լ��� å ����-

             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
using namespace std;

 
class MyIntStack{ //MyIntStack Ŭ����
    int p[10]; // �ִ� 10���� ���� ���� 
    int tos; // ������ ����⸦ ����Ű�� �ε��� 
public:
    MyIntStack(); //������
    bool push(int n); // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ���� 
    bool pop(int &n); // ���Ͽ� n�� ����. ������ ��� ������ false, �ƴϸ� true ���� 
};
 

 // ����Լ� (Ŭ���� ������)
MyIntStack::MyIntStack(){
    tos = 0; // �����ڿ��� ���� �ʱ�ȭ
}
 
bool MyIntStack::push(int n){ //push
    if(tos>9) 
        return false; //tos �� �� ������ false ����
    else { 
        p[tos] = n;
        tos++;
        return true; //�ƴϸ� true ����
    }
}
 
bool MyIntStack::pop(int& n){ // ������ ���� ȣ��
    tos--;
    if(tos<0) 
        return false; // ������ ��� ������ false ����
    else {
        n = p[tos];
        return true; //�ƴϸ� true ����
    }
}


int main() {
    MyIntStack a;
    for(int i=0; i<11; i++) { // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�. 
        if(a.push(i)) cout << i << ' '; // Ǫ�õ� �� ���� 
        else cout << endl << i+1 << " ��° stack full" << endl;
    }
    int n;
    for(int i=0; i<11; i++) { // 11���� ���ϸ�, ���������� stack empty�� �ȴ�. 
        if(a.pop(n)) cout << n << ' '; // �� �� �� ��� 
        else cout << endl << i+1 << " ��° stack empty";
    }
    cout << endl;
}
