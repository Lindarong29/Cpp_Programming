#include<iostream>
using namespace std;

#include "Problem4-4.h"


void Sample::read(){ //read 멤버함수
    for(int i=0; i<size; i++){
        cin >> p[i]; //정수를 차례로 입력받아서 배열 p에 저장
    }
}

void Sample::write(){ //write 멤버함수
    for(int i=0; i<size; i++){
        cout << p[i] << " "; //배열에 저장된 수 차례로 출력
    }
    cout << endl; //모두 출력한 뒤 마지막에 줄바꿈
}

int Sample::big(){ //big 멤버함수 
    int num = 0; //변수생성, 초기화
    for(int i=0; i<size; i++){ 
        if(num < p[i]) num = p[i]; // 둘 중 큰 수를 big에 저장 반복
    }
    return num;
}

Sample::~Sample(){}
