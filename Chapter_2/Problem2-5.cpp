/* 
        5. <Enter> 키가 입력될 때까지 문자들을 읽고, 
            입력된 문자 'x'의 개수를 화면에 출력하라. 

             전자공학과 201835867 이다혜
*/
#include<iostream>
using namespace std;

int main()
{
	char text[100];
	int num = 0;
    system("chcp 65001");

	cout << "문자들을 입력하라(100개 미만).\n"; 
	cin.getline(text, 100, '\n'); //Enter 입력 전까지 문자 입력 (\n 은 생략가능)

	for (int i = 0; i < 100; i++) {
		if (text[i] == 'x') num++; //text[i]가 x 이면 카운트 (num 갯수 1씩 증가)
	}

	cout << "x의 개수는 " << num << endl;

}