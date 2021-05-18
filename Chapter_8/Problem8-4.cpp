/* 
        4.   ���� 3~4�� ����Ǵ� 2���� ���� �� ���� ǥ���ϴ� Point Ŭ������ �ִ�.
             ���� main() �Լ��� ����ǵ��� Point Ŭ������ ��ӹ޴� ColorPoint Ŭ������ �ۼ��ϰ�, 
             ��ü ���α׷��� �ϼ��϶�.

             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
using namespace std;
 
class Point {
    int x,y;
public:
    int point(int x, int y) { this->x = x; this->y = y; }
    int getX(){ return x; }
    int getY(){ return y; }
protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};
 
class ColorPoint : public Point {
    string color;
public:
    ColorPoint(int x=0, int y=0, string color="BLACK"){
        point(x, y);
        this->color = color;
    }
    void setPoint(int x, int y){
        move(x, y);
    }
    void setColor(string color){
        this->color = color;
    }
    void show(){
        cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�.\n"; 
    }
};
 
int main() {
    ColorPoint zeroPoint; // BLACK ���� (0, 0) ��ġ�� ��
    zeroPoint.show(); // zeroPoint�� ����Ѵ�.
    
    ColorPoint cp(5, 5);
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show(); // cp�� ����Ѵ�.
}