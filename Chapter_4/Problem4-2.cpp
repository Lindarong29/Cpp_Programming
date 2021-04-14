/* 
        2. 정수 공간 5개를 배열로 동적 할당받고, 
            정수를 5개 입력받아 평균을 구하고 출력한 뒤 
            배열을 소멸시키도록 main() 함수를 작성하라.

             전자공학과 201835867 이다혜
*/

#include<iostream>
using namespace std;
 
int main() {
    int *p = new int[5]; //정수공간 5개 배열 동적할당
    double sum = 0; //합계
    cout << "정수 5개 입력>>";
    for(int i=0; i<5; i++) { 
        cin >> p[i]; //입력 받은 수 p[i]에
        sum += p[i]; //p[i] 값 sum에 더해서 저장
    }
    cout << "평균 " << sum/5; 
    delete [] p; //배열 소멸
}