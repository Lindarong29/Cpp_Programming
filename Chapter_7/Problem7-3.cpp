/* 
        3.  ���� ������ ���� ��¥ å������ �Ǻ��ϵ��� ! �����ڸ� �ۼ��϶�. 
            (Ŭ������ å ����)

             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
using namespace std;
 
class Book{
    string title;
    int price, pages, r;
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
    bool operator! ();
};
 
bool Book::operator!(){
    if(price == 0) { //���� ���Ͽ� 0�̸�
     r = true; //r=true
    }
    
    else {
     r = false; // �ƴϸ� false
    }

    return r; //��, ���� 0�̸� true, �ƴϸ� false ��ȯ
}
 
int main() {
    Book book("�������" , 0 , 50); // ���� = 0 
    if(!book) cout << "��¥��" << endl;
}
