/* 
        3.  다음 연산을 통해 공짜 책인지를 판별하도록 ! 연산자를 작성하라. 
            (클래스는 책 참고)

             전자공학과 201835867 이다혜
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
        cout << title << " " << price << "원 " << pages << " 페이지" << endl;
    }
    string getTitle() {
        return title;
    }
    bool operator! ();
};
 
bool Book::operator!(){
    if(price == 0) { //가격 비교하여 0이면
     r = true; //r=true
    }
    
    else {
     r = false; // 아니면 false
    }

    return r; //즉, 가격 0이면 true, 아니면 false 반환
}
 
int main() {
    Book book("벼룩시장" , 0 , 50); // 가격 = 0 
    if(!book) cout << "공짜다" << endl;
}
