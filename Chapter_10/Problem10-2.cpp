/* 
        2.   �� ���� �迭�� ���Ͽ� ������ true��, �ƴϸ� false�� �����ϴ� ���׸� �Լ� equalArrays()�� �ۼ��϶�.
             ���� main() �Լ��� �ۼ��Ͽ� equalArrays()�� ȣ���ϴ� �� ���� ��ʸ� ������.
             equalArrays()�� ȣ���ϴ� �ڵ� ��ʴ� ������ ����. (å ����)

             ���ڰ��а� 201835867 �̴���
*/

#include <iostream>
using namespace std;
 
template <class T>
T equalArray(T x[], T y[], T n){
    for(T i=0; i<n; i++)
        if(x[i] != y[i]) // �� �迭�� ������ ���� �ٸ��� false ���� 
            return false; 
    return true; // �� �迭�� ��� ������ ���� ������ true ���� 
}
 
int main() {
    int x[] = {1, 10, 100, 5, 4};
    int y[] = {1, 10, 100, 5, 4};
    if(equalArray(x, y, 5)) 
        cout << "����"; // �迭 x, y�� �����Ƿ� "����" ��� 
    else
        cout << "�ٸ���";
}
