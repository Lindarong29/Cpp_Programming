/* 
        10. �������� Person�� �����, Family�� ������ �߻�ȭ�� Ŭ�����μ� �ϼ����� ���� Ŭ�����̴�.
        ���� main()�� �۵��ϵ��� Person�� Family Ŭ������ �ʿ��� ������� �߰��ϰ� �ڵ带 �ϼ��϶�.

             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
#include<string>
using namespace std;

class Person {
    string name;
public :
    Person() {}; //�⺻
    Person(string name) {this->name = name;} 
    string getName() {return name;} //name�� ����
    void setName(string name) {this->name = name;} 
};

class Family {
    Person *p; //Person �迭������
    int size; //Person �迭�� ũ��, ���� ������ ��
    string name;
public :
    Family(string name, int size); //size ������ŭ Person �迭 ���� ����
    void show(); // ��� ���� ������ ���
    void setName(int num, string name); //��ȣ, �̸�
    ~Family(); //�Ҹ���
};

Family::Family(string name, int size){
    p = new Person[size];
    this->size = size;
    this->name = name;
}

void Family :: setName (int num, string name){ //����Լ� setName
    p[num].setName(name); //num��° �迭�� name��
}

void Family::show(){ //����Լ� show
    cout<< name << "������ ������ ���� " << size << "�� �Դϴ�."<<endl;
    for (int i=0; i<size; i++) {
        cout << p[i].getName() << "\t"; //���� ������ ��� (0~size)
    }
}  

Family::~Family(){delete [] p;} //p�迭 ��ȯ

int main() {
    Family *simpson = new Family("Simpson", 3); //������ 3��, name�� Simpson
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson"); 
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson; //��ü ��ȯ
}