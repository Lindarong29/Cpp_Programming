/* 
        9. 클래스 Accumulator는 add() 함수를 통해  계속 값을 누적하는 클래스로서, 다음과 같이 선언된다.
            Accumulator 클래스를 구현하라.
            Accumulator는 다음과 같이 main() 함수에 의해 활용된다.
           
            - Accumulator 클래스와 main()함수는 책 참고-

             전자공학과 201835867 이다혜
*/

 
 
#include<iostream>
using namespace std;

class Accumulator{
    int value;
public:
    Accumulator(int value); // 매개 변수 value로 멤버 value를 초기화한다. 
    Accumulator& add(int n); // value에 n을 더해 값을 누적한다. 
    int get(); // 누적된 값 value를 리턴한다. 
};
 

Accumulator::Accumulator(int value){
    this->value = value; // 매개 변수 value로 멤버 value를 초기화.
}
 
Accumulator& Accumulator::add(int n){
    value += n; // value에 n을 더해 값을 누적한다.
    return *this; // 자기 자신의 참조 리턴
}
 
int Accumulator::get(){
    return value; // 누적된 값 value 리턴
}


int main() {
    Accumulator acc(10); //acc 10
    acc.add(5).add(6).add(7); // acc의 value 멤버가 28이 된다.
    cout << acc.get(); // 28 출력 
} 