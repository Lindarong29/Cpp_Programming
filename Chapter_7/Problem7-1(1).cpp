/* 
        1.  Book 객체에 대해 다음 연산을 하고자 한다. (책 참고)
            (1) +=, -= 연산자 함수를 Book 클래스의 멤버 함수로 구현하라.
    
             전자공학과 201835867 이다혜
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
        cout << title << " " << price << "원 " << pages << " 페이지" << endl;
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
    Book a("청춘", 20000, 300) , b("미래", 30000, 500);
    a += 500; // 책 a의 가격 500원 증가
    b -= 500; // 책 b의 가격 500원 감소
    a.show();
    b.show(); 
}
