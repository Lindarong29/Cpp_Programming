/* 
        5. ���� Circle Ŭ������ �ִ�.
            Circle ��ü b�� a�� ���Ͽ� a�� Ű����� ���� �Լ��� �ۼ��Ͽ���.
            ���� �ڵ带 �����ϸ� increaseBy() �Լ��� ������� ����Ǵ°�?
            main() �Լ��� ������ �޼��ϵ��� increaseBy() �Լ��� �����϶�
                
            - Circle Ŭ����, increaseBy() �Լ�, main() �Լ��� å�� ���� -

             ���ڰ��а� 201835867 �̴���
*/


#include<iostream>
using namespace std;
 
class Circle{
    int radius;
public:
    Circle(int r) {radius =r;}
    int getRadius() {return radius;}
    void setRadius(int r) {radius = r;}
    void show() {cout << "�������� " << radius << "�� ��" << endl;} 
};
 
void increaseBy(Circle &a, Circle &b) { //������ ���� ȣ�� ���
    int r = a.getRadius() + b.getRadius();
    a.setRadius(r);
}
 
int main() {
    Circle x(5), y(10);
    increaseBy(x, y); // x�� �������� 15�� ���� ������� �Ѵ�. 
    x.show(); // "�������� 15�� ��"�� ���
}