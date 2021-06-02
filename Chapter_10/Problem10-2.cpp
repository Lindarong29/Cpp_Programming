/* 
        2.   두 개의 배열을 비교하여 같으면 true를, 아니면 false를 리턴하는 제네릭 함수 equalArrays()를 작성하라.
             또한 main() 함수를 작성하여 equalArrays()를 호출하는 몇 가지 사례를 보여라.
             equalArrays()를 호출하는 코드 사례는 다음과 같다. (책 참고)

             전자공학과 201835867 이다혜
*/

#include <iostream>
using namespace std;
 
template <class T>
T equalArray(T x[], T y[], T n){
    for(T i=0; i<n; i++)
        if(x[i] != y[i]) // 두 배열의 원소의 값이 다르면 false 리턴 
            return false; 
    return true; // 두 배열의 모든 원소의 값이 같으면 true 리턴 
}
 
int main() {
    int x[] = {1, 10, 100, 5, 4};
    int y[] = {1, 10, 100, 5, 4};
    if(equalArray(x, y, 5)) 
        cout << "같다"; // 배열 x, y가 같으므로 "같다" 출력 
    else
        cout << "다르다";
}
