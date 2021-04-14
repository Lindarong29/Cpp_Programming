/* 
        4. 다음과 같은 Sample 클래스가 있다.
            다음 main() 함수가 실행되도록 Sample 클래스를 완성하라.
            (Sample 클래스와 main()함수 책 참고)

             전자공학과 201835867 이다혜
*/

#include <iostream>
using namespace std;

#include "Problem4-4.h"

int main() {
    Sample s(10); //10개의 정수 배열을 가진 Sample 객체 생성
    s.read(); //키보드에서 정수 배열 읽기
    s.write(); //정수 배열 출력
    cout << "가장 큰 수는 " << s.big() << endl; //가장 큰 수 출력
}
