/* 
        2.   문제 1~2에 적용되는 원을 추상화한 Circle 클래스가 있다.
              다음과 같이 배열을 선언하여 다음 실행 결과가 나오도록 
              Circle을 상속받은 NamedCircle 클래스와 main() 함수 등 필요한 함수를 작성하라.

             전자공학과 201835867 이다혜
*/

#include<iostream>
using namespace std;
 
class Circle{
    int radius;
public:
    Circle(int radius=0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};
 
class NameCircle : public Circle{
    string name;
public:
    void setRN(int R, string N){
        setRadius(R);
        this->name = N;
    }
    string getName(){
        return name;
    }
};

int main() {
    string name;
    int radius,big;
    double size[5];
    NameCircle pizza[5];
    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요\n";
    for(int i=0; i<5; i++){
        cout << i+1 << ">> ";
        cin >> radius >> name;
        pizza[i].setRN(radius,name);
        size[i] = pizza[i].getArea();
    }
    big=0;
    for(int i=0; i<4; i++){
        if(size[i] < size[i+1])
            big = i+1; 
    }
    cout << "가장 면적이 큰 피자는 " << pizza[big].getName() << "입니다";
}
