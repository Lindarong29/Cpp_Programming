/*
    7. 문제 5번을 참고하여 생성자를 이용하여 짝수 홀수를 선택할 수 있도록 
        SelectableRandom 클래스를 작성하고 짝수 10개, 홀수 10개를 랜덤하게 발생시키는 프로그램을 작성하라.

            전자공학과 201835867 이다혜
*/

#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;
 
class SelectableRandom{
    int num;

public:
    SelectableRandom(int number); //생성자_매개변수로 짝수 혹은 홀수를 받음
    int next(); //멤버함수
    int nextInRange(int a, int b); //멤버함수
};

SelectableRandom::SelectableRandom(int number){ 
    num = number; 
    srand((unsigned)time(0)); //시작할 때마다 다른 랜덤수 발생시키기 위한 seed 설정
}
 
int SelectableRandom::next() { //next 함수 구현
    int ran = rand(); //랜덤 정수 발생
    int A;
    if(num%2 == 0){ // 매개변수가 짝수일 때
        if(ran%2 == 0){ // 랜덤값 짝수
            A = ran;
        }
        else { //랜덤값 홀수
            A = ++ran;  //랜덤값 1 증가(홀수+1=짝수)
        }
    }

    else { // 매개변수가 홀수일 때
        if(ran%2 == 0){ //랜덤값 짝수
            A = ++ran; //랜덤값 1 증가 (짝수+1=홀수)
        }
        else{ //랜덤값 홀수
            A = ran;
        }
    }
    
    return A; //A값 리턴
}

 
int SelectableRandom::nextInRange(int a, int b){
    int ran = rand()%(b-a+1) + a; //a부터 b까지의 랜덤한 정수
    int A;
    if(num%2 == 0){ // 매개변수가 짝수일 때
        if(ran%2 == 0){ // 랜덤값 짝수
            A = ran;
        }
        else { //랜덤값 홀수
            A = ++ran;  //랜덤값 1 증가(홀수+1=짝수)
        }
    }

    else { // 매개변수가 홀수일 때
        if(ran%2 == 0){ //랜덤값 짝수
            A = ++ran; //랜덤값 1 증가 (짝수+1=홀수)
        }
        else{ //랜덤값 홀수
            A = ran;
        }
    }
    return A; //A값 리턴
}
 

int main() {
    SelectableRandom r1(4); // 짝수 랜덤 정수 발생
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++) {
        int n = r1.next(); // 0에서 RAND_MAW 사이의 랜덤한 짝수 정수
        cout << n << ' ';
    } 
    
    SelectableRandom r2(1); // 홀수 랜덤 정수 발생
    cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
    for(int i=0; i<10; i++) {
        int n = r2.nextInRange(2,9); // 2에서 9 사이의 랜덤한 홀수 정수
        cout << n << ' ';
    }
    cout << endl;
}
