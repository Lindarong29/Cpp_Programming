/*
    3. 은행에서 사용하는 프로그램을 작성하기 위해, 은행 계좌 하나를 표현하는 클래스 Account가 필요하다.

        계좌 정보는 계좌의 주인, 계좌 번호, 잔액을 나타내는 3 멤버 변수로 이루어진다.

        main() 함수의 실행과 결과가 다음과 같도록 Account 클래스를 작성하라.

            전자공학과 201835867 이다혜

*/

#include<iostream>
#include<string>
using namespace std;
 
 
class Account{ //클래스 선언부
    string name; //멤버변수 (계좌 주인)
    int id; //멤버변수 (계좌번호)
    int balance; //멤버변수 (잔액)

public:
    Account(string n, int i, int b); //Account 생성자_매개변수 n,i,b 
    string getOwner(); //멤버함수 (주인)
    void deposit(int i); //멤버함수_매개변수 i_예금)
    int withdraw(int i); //멤버함수_매개변수 i_출금)
    int inquiry(); //멤버함수
};
 
Account::Account(string n, int i, int b){  //클래스 구현부
    name = n;
    id = i;
    balance = b;
}
 
void Account::deposit(int i){ //매개변수 i인 deposit 함수의 구현
    balance += i; //예금 시 잔액에 더해줌.
}
 
string Account::getOwner(){ //getOwner 함수 구현
    return name; //name 반환
}
 
int Account::withdraw(int i){ //매개변수 a인 withdraw 함수 구현
    balance -= i; //출금 시 잔액에서 빼줌.
    return i;
}
 
int Account::inquiry(){ //inquiry 함수 구현
    return balance; //잔액 반환
}
 
int main(){
    Account a("Kitae", 1, 5000); //계좌 주인 이름 Kitae,  id 1번, 잔액 5000원인 계좌 생성
    a.deposit(50000); // 예금 50000원
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl; 
    int balance = a.withdraw(20000); //출금 20000원
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}