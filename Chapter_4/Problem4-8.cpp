/* 
        8. �ǽ� ���� 7�� ������ �����غ���. 
            ����ڷκ��� ������ ���� ���� ������ �Է¹ް�, ���� ������ŭ �������� �Է¹޴� ������� �����϶�.
            ���� ������ ���� �������� �迭�� �Ҵ�޾ƾ� �Ѵ�.

             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
using namespace std;
 
class Circle{
    int radius;
public:
    void setRadius(int radius); //������ ����
    double getArea(); //���� ����
};
 
void Circle::setRadius(int r){ //����Լ� setRadius
    radius = r; //������ ����
}
 
double Circle::getArea(){ //����Լ� getArea
    return radius * radius * 3.14; //�������� (r^2 times 3.14)
}    
 
int main() {
    int r=0; // ������
    int num=0; // �Է¹��� �� = ���� ����
    int count=0; // 100���� ū ������ �� ����

    cout << "���� ���� >> ";
    cin >> num ; //�Է� ���� �� num�� ����

    Circle *pArray = new Circle[num]; // �Է¹��� �� ��ŭ ���� ��ü �迭 ����

    for(int i=0; i<num; i++){
        cout << "�� " << i+1 << "�� ������ >> ";
        cin >> r; // ������ �Է�
        pArray->setRadius(r);
        if(pArray->getArea() > 100) //������ 100���� ������
            count++; // count ����
        pArray++; 
    }
    
    cout << "������ 100���� ū ���� " << count << "�� �Դϴ�";
}