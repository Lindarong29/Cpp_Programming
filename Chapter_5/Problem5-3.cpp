/* 
        3. 다음과 같이 작동하도록 combine() 함수를 작성하라.

            int main() {
                string text1("I love you"), text2("very much");
                string text3; // 비어있는 문자열 
                combine(text1, text2, text3); 
                    // text1과 " ", 그리고 text2를 덧붙여 text3 만들기 
                cout << text3; 
                    // "I love you very much" 출력
            }

             전자공학과 201835867 이다혜
*/

#include<iostream>
#include<string>
using namespace std;
 
void combine(string t1, string t2, string &t3){
    t3 = t1 + " " + t2;
}
 
int main() {
    string text1("I love you"), text2("very much");
    string text3; // 비어있는 문자열 
    combine(text1, text2, text3); // text1과 " ", 그리고 text2를 덧붙여 text3 만들기 
    cout << text3; // "I love you very much" 출력
}


