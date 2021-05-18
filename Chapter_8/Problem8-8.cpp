/* 
        8.   다음 그림과 같은 상속 구조를 갖는 클래스를 설계한다.
             모든 프린터는 모델명(model), 제조사(manufacturer), 인쇄 매수(printedCount), 인쇄 종이 잔량(availableCount)을 나타내는 정보와 
             print(int pages) 멤버 함수를 가지며, print()가 호출할 때마다 pages 매의 용지를 사용한다.
             잉크젯 프린터는 잉크 잔량(availableInk) 정보와 printInkJet(int pages) 멤버 함수를 추가적으로 가지며, 
             레이저 프린터는 토너 잔량(availableToner) 정보와 역시 printLaser(int pages) 멤버 함수를 추가적으로 가진다.
             각 클래스에 적절한 접근 지정으로 멤버 변수와 함수, 생성자, 소멸자를 작성하고, 
             다음과 같이 실행되도록 전체 프로그램을 완성하라.
             잉크젯 프린터 객체와 레이저 프린터 객체를 각각 하나만 동적 생성하여 시작한다.

             전자공학과 201835867 이다혜
*/
#include<iostream>
using namespace std;
 
class PrintMachine {
    string model, manuf;
    int pcount, avlcount;
protected:
    PrintMachine(string model, string manuf, int avlcount){
        this->model=model;
        this->manuf=manuf;
        this->avlcount=avlcount;
    }
    bool print(int pages){
        if(avlcount < pages){
            cout << "용지가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for(int i=0; i< pages; i++){
            avlcount--;
        }
        return true;
    }
    string get_model(){ return model; }
    string get_manuf(){ return manuf; }
    int get_avlcount(){ return avlcount; }
};    
 
class PrintInkJet : public PrintMachine {
    int avlink;
public:
    PrintInkJet(string model, string manuf, int avlcount, int avlink) : PrintMachine(model, manuf, avlcount){
        this->avlink = avlink;
    }
    bool printInkJet(int pages){
        if(print(pages));
        else return false;
        if(avlink < pages){
            cout << "잉크가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for(int i=0; i<pages; i++){
            avlink--;
        }
        return true;
    }
    void show(){
        cout << get_model() << "\t," << get_manuf() << "\t,남은 종이 " << get_avlcount() << "장\t,남은 잉크 " << avlink << endl;
    }
};
 
class PrintLaser : public PrintMachine {
    int avltoner;
public:
    PrintLaser(string model, string manuf, int avlcount, int avltoner) : PrintMachine(model, manuf, avlcount){
        this->avltoner = avltoner;
    }
    bool printLaser(int pages){
        if(print(pages));
        else return false;
        if(avltoner < pages){
            cout << "토너가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for(int i=0; i<pages; i++)
            avltoner--;
        return true;
    }
    void show(){
        cout << get_model() << " ," << get_manuf() << "\t,남은 종이 " << get_avlcount() << "장\t,남은토너 " << avltoner << endl;
    }
};
 
int main() {
    int pnum, pages;
    char yon;
    PrintInkJet* inkjet = new PrintInkJet("Officejet V40", "Hp", 5, 10);
    PrintLaser* laser = new PrintLaser("SCX-6x45", "삼성전자", 3, 20);
    cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
    cout << "잉크젯 : ";
    inkjet->show();
    cout << "레이저 : ";
    laser->show();
    cout << endl;
    
    while(true){
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> pnum >> pages;
            switch(pnum){
            case 1:
                if(inkjet->printInkJet(pages))
                    cout << "프린트 하였습니다.\n";
                break;
            case 2:
                if(laser->printLaser(pages))
                    cout << "프린트 하였습니다.\n";
                break;
            default :
                cout << "프린터를 잘못 선택하셨습니다.\n";
                break;
        inkjet->show();
        laser->show();
        while(true){
            cout << "계속 프린트 하시겠습니까(y/n)>>";
            cin >> yon;
            cout << endl;
            if(yon=='n') 
                return 0;
            else if(yon=='y') 
                break;
            else 
                cout << "잘못 입력하셨습니다.\n";
        }
    }
    delete inkjet;
    delete laser;
}
}
