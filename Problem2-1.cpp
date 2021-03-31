/* 
cout과 << 연산자를 이용하여, 1에서 100까지 정수를 다음과 같이 
한 줄에 10개씩 출력하고 각 정수는 탭으로 분리하여 출력하라. 

             전자공학과 201835867 이다혜
*/

#include <iostream>
using namespace std;

void count(int num) {
    int n = 1;
    for (int i = 0; i < num; i++) { // 10개 마다 줄바꿔서 num 개의 줄 출력
        for (int j = 0; j < 10; j++){ //숫자 + 탭 10개 씩 출력
            cout << n << '\t';
            n++;
        }
        cout << endl;
    }
}

int main() {
    count(10); //출력하고 싶은 줄 수 = 10줄 (10*10=100)
    return 0;
}
