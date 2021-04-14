/* 
        6. string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 
            문자열로 입력받고 거꾸로 출력하는 프로그램을 작성하라.

             전자공학과 201835867 이다혜
*/

#include<iostream>
#include<string>
using namespace std;
 
int main() {
    string text;
    cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";
    
    while(true){
        cout << endl << ">>";
        getline(cin,text); //문자열 입력
        if(text == "exit") //exit입력시 종료
            break;
        for(int i = text.length()-1; i>=0; i--) { 
            //출력 시 마지막 공백을 무시해주기 위해 length()-1 을 해줘야 함.
            cout << text[i];
        }
    }
}
