/* 
        7. 다음과 같이 "yes"가 입력될 때까지 종료하지 않는 프로그램을 작성하라. 
            사용자로부터의 입력은 cin.getline() 함수를 사용하라. 

             전자공학과 201835867 이다혜
*/


#include<iostream>
#include<cstring> //strcmp() 함수 사용을 위한 헤더파일
using namespace std;

int main()
{
    system("chcp 65001");
	char text[100];
	
	while (true)
	{
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(text, 100, '\n'); //Enter 입력 전까지 문자 입력 (\n 생략가능)

		if (strcmp(text,"yes") == 0) { //strcmp() 함수, 두 문자열이 정확하게 일치한다면 0 을 리턴
            cout << "종료합니다..." << endl;
            break; 
        }

	}

}

