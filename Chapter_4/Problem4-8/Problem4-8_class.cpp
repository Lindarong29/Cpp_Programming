#include<iostream>
using namespace std;

#include "Problem4-8.h"
 
void Circle::setRadius(int r){ //멤버함수 setRadius
    radius = r; //반지름 설정
}
 
double Circle::getArea(){ //멤버함수 getArea
    return radius * radius * 3.14; //면적리턴 (r^2 times 3.14)
}    