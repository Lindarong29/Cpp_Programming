/* 
        1.  Book ��ü�� ���� ���� ������ �ϰ��� �Ѵ�. (å ����)
            (1) +=, -= ������ �Լ��� Book Ŭ������ ��� �Լ��� �����϶�.
    
             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
using namespace std;
 
class Book{
    string title;
    int price, pages;
public:
    Book(string title="", int price=0, int pages=0){
        this->title = title; this->price = price; this->pages = pages;
    }
    void show() {
        cout << title << " " << price << "�� " << pages << " ������" << endl;
    }
    string getTitle() {
        return title;
    }
    Book& operator+= (int a);
    Book& operator-= (int a);
};
 
Book & Book::operator+=(int a) {
    price += a;
    return *this;
}
Book & Book::operator-=(int a) {
    price -= a;
    return *this;
}
 
int main() {
    Book a("û��", 20000, 300) , b("�̷�", 30000, 500);
    a += 500; // å a�� ���� 500�� ����
    b -= 500; // å b�� ���� 500�� ����
    a.show();
    b.show(); 
}
