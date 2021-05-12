/* 
        7.  2차원 행렬을 추상화한 Matrix 클래스를 활용하는 다음 코드가 있다.

            (2) <<, >> 연산자 함수를 Matrix의 프렌드 함수로 구현하라.
            
             전자공학과 201835867 이다혜
*/

#include<iostream>
using namespace std;
 
class Matrix{
    int arr[4];
public:
    Matrix(){;}
    Matrix(int a, int b, int c, int d) { arr[0]=a; arr[1]=b; arr[2]=c; arr[3]=d; }
    void show();
    friend void operator>> (Matrix& a, int x[]);
    friend void operator<< (Matrix& b, int y[]);
};
 
void Matrix::show() {
    cout << "Matrix" << " = { ";
    for(int i=0; i<4; i++) cout << this->arr[i] << ' ';
    cout << "}" << endl; 
}
 
void operator>> (Matrix& a, int x[]){
    for(int i=0; i<4; i++){
        x[i] = a.arr[i]; 
    }
}
 
void operator<< (Matrix& b, int y[]){
    for(int i=0; i<4; i++){
        b.arr[i] = y[i]; 
    }
}
 
int main() {
    Matrix a(4,3,2,1), b;
    int x[4], y[4]={1,2,3,4}; // 2차원 행렬의 4 개의 원소 값 
    a >> x; // a의 각 원소를 배열 x에 복사. x[]는 {4,3,2,1} 
    b << y; // 배열 y의 원소 값을 b의 각 원소에 설정 
    
    for(int i=0; i<4; i++) cout << x[i] << ' '; // x[] 출력 
    cout << endl;
    b.show();
}  