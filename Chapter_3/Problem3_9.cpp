/*
    9. Oval 클래스는 주어진 사각형에 내접하는 타원을 추상화한 클래스이다.
        Oval 클래스의 멤버는 모두 다음과 같다. (책 참고)
        Oval 클래스를 선언부와 구현부로 나누어 작성하라.

            전자공학과 201835867 이다혜
*/

#include<iostream>
using namespace std;
 
class Oval{
    int width, height; //정수값의 사각형 너비와 높이를 가지는 변수멤버
public:
    Oval(); //너비와 높이를 1로 초기화하는 매개변수 없는 생성자
    Oval(int a, int b); //너비와 높이 값을 매개 변수로 받는 생성자
    int getWidth(); //타원의 너비를 리턴하는 멤버함수
    int getHeight(); //타원의 높이를 리턴하는 멤버함수
    void set(int w, int h); //타원의 너비와 높이를 변경하는 멤버함수
    void show(); //타원의 너비와 높이를 화면에 출력하는 멤버함수
    ~Oval(); //width와 height를 출력하는 소멸자
};
 
    Oval::Oval(){ //너비와 높이를 1로 초기화하는 매개변수 없는 생성자
        width =  height = 1;
    }

    Oval::Oval(int a, int b){ //너비와 높이 값을 매개 변수로 받는 생성자
        width = a;
        height = b;
    }
    int Oval::getWidth(){ //타원의 너비를 리턴하는 멤버함수
        return width;
    }
    int Oval::getHeight(){ //타원의 높이를 리턴하는 멤버함수
        return height;
    }
    void Oval::set(int w, int h){ //타원의 너비와 높이를 변경하는 멤버함수
        width = w;
        height = h;
    }
     
    void Oval::show(){ //타원의 너비와 높이를 화면에 출력하는 멤버함수
        cout << "width = " << width << ", height = " << height << endl;
    }
    
    Oval::~Oval(){ //width와 height를 출력하는 소멸자
        cout << "Oval 소멸 : width = " << width << ", height = " << height << endl; 
    }
    
int main() {
    Oval a, b(3,4); //너비는 3, 높이는 4
    a.set(10, 20); // 너비와 높이를 각각 10과 20으로 변경
    a.show(); //너비와 높이 화면에 출력
    cout << b.getWidth() << "," << b.getHeight() << endl;
}
