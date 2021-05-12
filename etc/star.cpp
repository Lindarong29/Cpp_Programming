/* 다음과 같이 출력하는 프로그램을 작성하여라.

    *
    **
    ***
    ****

*/

#include <iostream>
using namespace std;

int main (){
    for (int i=1; i<=4; i++){              // i=1부터 4까지 4번 반복
        for (int star=1; star<=i; star++){ // star가 i와 같아질 때까지
        cout << "*";                       // * 출력 반복 (1 ~ 4개)
        }
    cout << "\n";                          // * 출력 한 줄 끝내면 줄바꿈 후 다시 반복
    }
}
