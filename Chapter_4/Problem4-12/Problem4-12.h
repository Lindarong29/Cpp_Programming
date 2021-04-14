#include<iostream>
#include<string>
using namespace std;

class Circle {
    int radius; //원의 반지름 값
    string name; //원의 이름
public :
    void setCircle(string name, int radius); // 이름과 반지름 설정
    double getArea(); //면적
    string getName(); //이름
};

class CircleManager {
    Circle *p; //Circle 배열에 대한 포인터
    int size; //배열의 크기
    int radius;
    string name;
public :
    CircleManager(int size);
    ~CircleManager();
    void searchByName(); //원의 이름을 입력받아 면적 출력
    void searchByArea(); //면적을 입력받아 면적보다 큰 원의 이름 출력
};