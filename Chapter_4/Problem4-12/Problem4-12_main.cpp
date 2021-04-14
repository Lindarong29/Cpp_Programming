#include<iostream>
#include<string>
using namespace std;

#include "Problem4-12.h"

int main() {
    int num; //원의 개수
    cout << "원의 개수 >> ";
    cin >> num; //원의 개수 입력받음
    CircleManager A(num); //
    A.searchByName();
    A.searchByArea();    
}