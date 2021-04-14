/* 
        12. 다음은 이름과 반지름을 속성으로 가진 Circle 클래스와 
            이들을 배열로 관리하는 CircleManager 클래스이다.
            키보드에서 원의 개수를 입력받고, 그 개수만큼 원의 이름과 반지름을 입력받고, 
            다음과 같이 실행되도록 main() 함수를 작성하라.
            Circle, CircleManager 클래스도 완성하라.

             전자공학과 201835867 이다혜
*/

#include<iostream>
#include<string>
using namespace std;

class Circle {
    int radius; //원의 반지름 값
    string name; //원의 이름
public :
    void setCircle(string name, int radius); // 이름과 반지름 설정
    double getArea(); //면적
    string getName(); //이름
};

class CircleManager {
    Circle *p; //Circle 배열에 대한 포인터
    int size; //배열의 크기
    int radius;
    string name;
public :
    CircleManager(int size);
    ~CircleManager();
    void searchByName(); //원의 이름을 입력받아 면적 출력
    void searchByArea(); //면적을 입력받아 면적보다 큰 원의 이름 출력
};

void Circle :: setCircle(string name, int radius){ //멤버함수 setCircle
    this->name = name; 
    this->radius = radius;
}

double Circle::getArea(){ //멤버함수 getArea
    return radius * radius * 3.14; //면적 반환
}
 
string Circle::getName(){ //멤버합수 getName
    return name; //이름 반환
}

CircleManager::CircleManager(int size){ //멤버함수
    p = new Circle[size]; // 포인터 배열 생성
    this->size = size; //원의 개수
    for(int i=0; i<size; i++){ //원의 개수만큼 실행
        cout << "원 " << i+1 << "의 이름과 반지름 >> ";
        cin >> name >> radius; //이름과 반지름 입력받음
        p[i].setCircle(name,radius); //배열 p에 저장
    }
}

CircleManager::~CircleManager(){
    delete [] p;
}

void CircleManager::searchByName(){ //원의 이름 입력받아 면적 출력
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> name; //원의 이름 입력받아서
    for(int i=0; i<size; i++){
        if(name == p[i].getName()){ //입력받은 이름이 같으면
            cout << name << "의 면적은 " << p[i].getArea() << endl; //면적 출력
        }
    }
}

void CircleManager::searchByArea(){ //면적을 입력받아 면적보다 큰 원의 이름 출력
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> radius; //면적을 입력받아서
    cout << radius << "보다 큰 원을 검색합니다.\n";
    for(int i=0; i<size; i++){
        if(radius<p[i].getArea()){ //입력받은 면적보다 더 크면
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() <<","; //출력 
        }
    }
}

int main() {
    int num; //원의 개수
    cout << "원의 개수 >> ";
    cin >> num; //원의 개수 입력받음
    CircleManager A(num); //
    A.searchByName();
    A.searchByArea();    
}