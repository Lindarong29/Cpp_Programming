/* 
        9.  ���� 8���� Circle ��ü�� ���� ���� ������ �����ϵ��� �����ڸ� �����϶�.

            
             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
using namespace std;
 
class Circle{
    int radius;
public:
    Circle(int radius=0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << " �� ��" << endl; }
    friend Circle operator+ (int x, Circle c);
};
 
Circle operator+ (int x, Circle c){
    c.radius += x;
    return c;
}
 
int main() {
    Circle a(5), b(4);
    b = 1+a; // b�� �������� a�� �������� 1�� ���� ������ ���� 
    a.show();
    b.show();
}