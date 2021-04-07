/*
    5. 랜덤 수를 발생시키는 Random 클래스를 만들자. 
        Random 클래스를 이용하여 랜덤 한 정수를 10개 출력하는 사례는 다음과 같다.
        Random 클래스가 생성자, next(), nextInRange()의 3개의 멤버 함수를 가지도록 작성하고 
        main() 함수와 합쳐 하나의 cpp 파일에 구현하라.

            전자공학과 201835867 이다혜
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
 
class Random{ //클래스 선언부
public:
    Random(); //생성자
    int next(); //멤버함수
    int nextInRange(int a, int b); //멤버함수
};

Random::Random(){ //Random 함수 구현
    srand((unsigned)time(0)); //시작할 때마다 다른 랜덤수를 발생하기 위한 seed 설정
}
 
int Random::next() { //next 함수 구현
    return rand();
} 

int Random::nextInRange(int a, int b){ // 매개변수 a,b 인 nextInRange 함수 구현
    return rand()%(b-a+1) + a; //a와 b사이 랜덤한 정수 -> a부터 b까지의 랜덤한 정수
}
 
int main() {
    Random r; 
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++) { //0~9까지 반복 (10개)
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++) { //0~9까지 반복 (10개)
        int n = r.nextInRange(2,4); // 2에서 4 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl;
}
