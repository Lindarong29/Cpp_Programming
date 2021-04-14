#include<iostream>
#include<string>
using namespace std;

#include "Problem4-12.h"


void Circle :: setCircle(string name, int radius){ //멤버함수 setCircle
    this->name = name; 
    this->radius = radius;
}

double Circle::getArea(){ //멤버함수 getArea
    return radius * radius * 3.14; //면적 반환
}
 
string Circle::getName(){ //멤버합수 getName
    return name; //이름 반환
}

CircleManager::CircleManager(int size){ //멤버함수
    p = new Circle[size]; // 포인터 배열 생성
    this->size = size; //원의 개수
    for(int i=0; i<size; i++){ //원의 개수만큼 실행
        cout << "원 " << i+1 << "의 이름과 반지름 >> ";
        cin >> name >> radius; //이름과 반지름 입력받음
        p[i].setCircle(name,radius); //배열 p에 저장
    }
}

CircleManager::~CircleManager(){
    delete [] p;
}

void CircleManager::searchByName(){ //원의 이름 입력받아 면적 출력
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> name; //원의 이름 입력받아서
    for(int i=0; i<size; i++){
        if(name == p[i].getName()){ //입력받은 이름이 같으면
            cout << name << "의 면적은 " << p[i].getArea() << endl; //면적 출력
        }
    }
}

void CircleManager::searchByArea(){ //면적을 입력받아 면적보다 큰 원의 이름 출력
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> radius; //면적을 입력받아서
    cout << radius << "보다 큰 원을 검색합니다.\n";
    for(int i=0; i<size; i++){
        if(radius<p[i].getArea()){ //입력받은 면적보다 더 크면
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() <<","; //출력 
        }
    }
}