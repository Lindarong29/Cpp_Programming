/* 
        6. string Ŭ������ �̿��Ͽ� ����ڰ� �Է��� ���� �� ���� 
            ���ڿ��� �Է¹ް� �Ųٷ� ����ϴ� ���α׷��� �ۼ��϶�.

             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
#include<string>
using namespace std;
 
int main() {
    string text;
    cout << "�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)";
    
    while(true){
        cout << endl << ">>";
        getline(cin,text); //���ڿ� �Է�
        if(text == "exit") //exit�Է½� ����
            break;
        for(int i = text.length()-1; i>=0; i--) { 
            //��� �� ������ ������ �������ֱ� ���� length()-1 �� ����� ��.
            cout << text[i];
        }
    }
}
