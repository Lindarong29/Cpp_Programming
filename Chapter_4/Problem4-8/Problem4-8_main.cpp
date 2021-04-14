#include<iostream>
using namespace std;

#include "Problem4-8.h"

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