/* 
        1. 두 개의 Circle 객체를 교환하는 swap() 함수를 
            '참조에 의한 호출'이 되도록 작성하고 호출하는 프로그램을 작성하라.
    
             전자공학과 201835867 이다혜
*/

#include<iostream>
using namespace std;
 
class Circle {
    int num;
public:
    Circle(); 
    Circle(int num) {this->num = num;}
    void setNum(int num) {this->num = num;} 
    int getNum() {return num;} 
};

void swap(Circle &a, Circle &b) { 
    //매개변수로 객체를 받을때 참조 연산자(&) 이용
    int swap;
    swap = a.getNum();
    a.setNum(b.getNum());
    b.setNum(swap);  
}
 
int main() {
    Circle a(1), b(2); //a에 1, b에 2 
    cout << a.getNum() << " " << b.getNum() << endl;
    swap(a,b); // a와 b 객체 교환
    cout << a.getNum() << " " << b.getNum();
}
