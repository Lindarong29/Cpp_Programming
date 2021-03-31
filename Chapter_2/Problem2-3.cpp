/* 
    3. 키보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력하라.

             전자공학과 201835867 이다혜
*/

#include <iostream>
using namespace std;

int main(){
	int num1, num2;

	cout << "두 수를 입력하라>>";
	cin >> num1 >> num2;

    int Bigger =  num1 > num2 ? num1 : num2 ;

	cout << "큰 수 =" << " " << ("%d\n", Bigger);
}