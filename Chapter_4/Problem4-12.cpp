/* 
        12. ������ �̸��� �������� �Ӽ����� ���� Circle Ŭ������ 
            �̵��� �迭�� �����ϴ� CircleManager Ŭ�����̴�.
            Ű���忡�� ���� ������ �Է¹ް�, �� ������ŭ ���� �̸��� �������� �Է¹ް�, 
            ������ ���� ����ǵ��� main() �Լ��� �ۼ��϶�.
            Circle, CircleManager Ŭ������ �ϼ��϶�.

             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
#include<string>
using namespace std;

class Circle {
    int radius; //���� ������ ��
    string name; //���� �̸�
public :
    void setCircle(string name, int radius); // �̸��� ������ ����
    double getArea(); //����
    string getName(); //�̸�
};

class CircleManager {
    Circle *p; //Circle �迭�� ���� ������
    int size; //�迭�� ũ��
    int radius;
    string name;
public :
    CircleManager(int size);
    ~CircleManager();
    void searchByName(); //���� �̸��� �Է¹޾� ���� ���
    void searchByArea(); //������ �Է¹޾� �������� ū ���� �̸� ���
};

void Circle :: setCircle(string name, int radius){ //����Լ� setCircle
    this->name = name; 
    this->radius = radius;
}

double Circle::getArea(){ //����Լ� getArea
    return radius * radius * 3.14; //���� ��ȯ
}
 
string Circle::getName(){ //����ռ� getName
    return name; //�̸� ��ȯ
}

CircleManager::CircleManager(int size){ //����Լ�
    p = new Circle[size]; // ������ �迭 ����
    this->size = size; //���� ����
    for(int i=0; i<size; i++){ //���� ������ŭ ����
        cout << "�� " << i+1 << "�� �̸��� ������ >> ";
        cin >> name >> radius; //�̸��� ������ �Է¹���
        p[i].setCircle(name,radius); //�迭 p�� ����
    }
}

CircleManager::~CircleManager(){
    delete [] p;
}

void CircleManager::searchByName(){ //���� �̸� �Է¹޾� ���� ���
    cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
    cin >> name; //���� �̸� �Է¹޾Ƽ�
    for(int i=0; i<size; i++){
        if(name == p[i].getName()){ //�Է¹��� �̸��� ������
            cout << name << "�� ������ " << p[i].getArea() << endl; //���� ���
        }
    }
}

void CircleManager::searchByArea(){ //������ �Է¹޾� �������� ū ���� �̸� ���
    cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
    cin >> radius; //������ �Է¹޾Ƽ�
    cout << radius << "���� ū ���� �˻��մϴ�.\n";
    for(int i=0; i<size; i++){
        if(radius<p[i].getArea()){ //�Է¹��� �������� �� ũ��
            cout << p[i].getName() << "�� ������ " << p[i].getArea() <<","; //��� 
        }
    }
}

int main() {
    int num; //���� ����
    cout << "���� ���� >> ";
    cin >> num; //���� ���� �Է¹���
    CircleManager A(num); //
    A.searchByName();
    A.searchByArea();    
}