#include<iostream>
using namespace std;

#include "Problem4-4.h"


void Sample::read(){ //read ����Լ�
    for(int i=0; i<size; i++){
        cin >> p[i]; //������ ���ʷ� �Է¹޾Ƽ� �迭 p�� ����
    }
}

void Sample::write(){ //write ����Լ�
    for(int i=0; i<size; i++){
        cout << p[i] << " "; //�迭�� ����� �� ���ʷ� ���
    }
    cout << endl; //��� ����� �� �������� �ٹٲ�
}

int Sample::big(){ //big ����Լ� 
    int num = 0; //��������, �ʱ�ȭ
    for(int i=0; i<size; i++){ 
        if(num < p[i]) num = p[i]; // �� �� ū ���� big�� ���� �ݺ�
    }
    return num;
}

Sample::~Sample(){}
