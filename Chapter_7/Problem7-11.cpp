/* 
        11.  스택 클래스 Stack을 만들고 푸시(push)용으로 << 연산자를, 
            팝(pop)을 위해 >> 연산자를, 비어 있는 스택인지를 알기 위해 ! 연산자를 작성하라.
            다음 코드를 main()으로 작성하라.
        
             전자공학과 201835867 이다혜
*/

#include<iostream>
using namespace std;
 
class Stack{
    int stack[10];
    int top;
public:
    Stack(){ top=0; }
    Stack& operator<< (int num){
        stack[top] = num;
        top++;
        return *this;
    }
    bool operator! (){
        if(top) 
            return false; 
        return true; //top이 empty면 true 반환 
    }
    Stack operator>> (int& x){
        x = stack[top-1];
        top--;
        return *this;
    }
};
 
int main() {
    Stack stack;
    stack << 3 << 5 << 10; // 3,5,10 순서대로 push 
    while(true){
        if(!stack) break; //stack empty
        int x;
        stack >> x; //stack의 top에 있는 정수 pop 
        cout << x << ' ';
    }
    cout << endl;
}
