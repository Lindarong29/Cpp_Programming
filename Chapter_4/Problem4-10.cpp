/* 
        10. 다음에서 Person은 사람을, Family는 가족을 추상화한 클래스로서 완성되지 않은 클래스이다.
        다음 main()이 작동하도록 Person과 Family 클래스에 필요한 멤버들을 추가하고 코드를 완성하라.

             전자공학과 201835867 이다혜
*/

#include<iostream>
#include<string>
using namespace std;

class Person {
    string name;
public :
    Person() {}; //기본
    Person(string name) {this->name = name;} 
    string getName() {return name;} //name값 리턴
    void setName(string name) {this->name = name;} 
};

class Family {
    Person *p; //Person 배열포인터
    int size; //Person 배열의 크기, 가족 구성원 수
    string name;
public :
    Family(string name, int size); //size 개수만큼 Person 배열 동적 생성
    void show(); // 모든 가족 구성원 출력
    void setName(int num, string name); //번호, 이름
    ~Family(); //소멸자
};

Family::Family(string name, int size){
    p = new Person[size];
    this->size = size;
    this->name = name;
}

void Family :: setName (int num, string name){ //멤버함수 setName
    p[num].setName(name); //num번째 배열에 name값
}

void Family::show(){ //멤버함수 show
    cout<< name << "가족은 다음과 같이 " << size << "명 입니다."<<endl;
    for (int i=0; i<size; i++) {
        cout << p[i].getName() << "\t"; //가족 구성원 출력 (0~size)
    }
}  

Family::~Family(){delete [] p;} //p배열 반환

int main() {
    Family *simpson = new Family("Simpson", 3); //구성원 3명, name은 Simpson
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson"); 
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson; //객체 반환
}