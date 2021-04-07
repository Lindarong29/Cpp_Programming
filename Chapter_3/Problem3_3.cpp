/*
    3. ���࿡�� ����ϴ� ���α׷��� �ۼ��ϱ� ����, ���� ���� �ϳ��� ǥ���ϴ� Ŭ���� Account�� �ʿ��ϴ�.

        ���� ������ ������ ����, ���� ��ȣ, �ܾ��� ��Ÿ���� 3 ��� ������ �̷������.

        main() �Լ��� ����� ����� ������ ������ Account Ŭ������ �ۼ��϶�.

            ���ڰ��а� 201835867 �̴���

*/

#include<iostream>
#include<string>
using namespace std;
 
 
class Account{ //Ŭ���� �����
    string name; //������� (���� ����)
    int id; //������� (���¹�ȣ)
    int balance; //������� (�ܾ�)

public:
    Account(string n, int i, int b); //Account ������_�Ű����� n,i,b 
    string getOwner(); //����Լ� (����)
    void deposit(int i); //����Լ�_�Ű����� i_����)
    int withdraw(int i); //����Լ�_�Ű����� i_���)
    int inquiry(); //����Լ�
};
 
Account::Account(string n, int i, int b){  //Ŭ���� ������
    name = n;
    id = i;
    balance = b;
}
 
void Account::deposit(int i){ //�Ű����� i�� deposit �Լ��� ����
    balance += i; //���� �� �ܾ׿� ������.
}
 
string Account::getOwner(){ //getOwner �Լ� ����
    return name; //name ��ȯ
}
 
int Account::withdraw(int i){ //�Ű����� a�� withdraw �Լ� ����
    balance -= i; //��� �� �ܾ׿��� ����.
    return i;
}
 
int Account::inquiry(){ //inquiry �Լ� ����
    return balance; //�ܾ� ��ȯ
}
 
int main(){
    Account a("Kitae", 1, 5000); //���� ���� �̸� Kitae,  id 1��, �ܾ� 5000���� ���� ����
    a.deposit(50000); // ���� 50000��
    cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl; 
    int balance = a.withdraw(20000); //��� 20000��
    cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}