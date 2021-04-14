/* 
        8. 실습 문제 7의 문제를 수정해보자. 
            사용자로부터 다음과 같이 원의 개수를 입력받고, 원의 개수만큼 반지름을 입력받는 방식으로 수정하라.
            원의 개수에 따라 동적으로 배열을 할당받아야 한다.

             전자공학과 201835867 이다혜
*/

#include<iostream>
using namespace std;
 
class Circle{
    int radius;
public:
    void setRadius(int radius); //반지름 설정
    double getArea(); //면적 리턴
};
 
void Circle::setRadius(int r){ //멤버함수 setRadius
    radius = r; //반지름 설정
}
 
double Circle::getArea(){ //멤버함수 getArea
    return radius * radius * 3.14; //면적리턴 (r^2 times 3.14)
}    
 
int main() {
    int r=0; // 반지름
    int num=0; // 입력받은 수 = 원의 개수
    int count=0; // 100보다 큰 면적의 원 개수

    cout << "원의 개수 >> ";
    cin >> num ; //입력 받은 수 num에 저장

    Circle *pArray = new Circle[num]; // 입력받은 수 만큼 동적 객체 배열 생성

    for(int i=0; i<num; i++){
        cout << "원 " << i+1 << "의 반지름 >> ";
        cin >> r; // 반지름 입력
        pArray->setRadius(r);
        if(pArray->getArea() > 100) //면적이 100보다 넓으면
            count++; // count 증가
        pArray++; 
    }
    
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다";
}