#include <iostream>
using namespace std;

double area(int r); //함수 원형 선언

double area(int r) { //함수 구현
    return 3.14*r*r;
}

int main (){
        system("chcp 65001"); // UTF-8 에서 한글 출력 오류로 인해 넣어준 코드
    int n=3;
    char c = '#';
    cout << c << 5.5 << '-' << n <<"hello" << true << '\n';
    cout << "n + 5 = " << n + 5 << '\n' ;
    cout << "면적은 " << area(n); // 함수 area() 리턴 값 출력
}