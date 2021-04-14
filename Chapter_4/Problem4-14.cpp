/* 
        14. 겜블링 게임을 만들어보자. 두 사람이 게임을 진행하며, 선수의 이름을 초기에 입력 받는다.
            선수가 번갈아 자신의 차례에서 <Enter> 키를 치면 
            랜덤한 3개의 수가 생성되고 모두 동일한 수가 나오면 게임에서 이기게 된다.
            숫자의 범위가 너무 크면 3개의 숫자가 일치할 가능성이 낮아 숫자의 범위를 0~2로 제한한다.
            랜덤 정수 생성은 문제 5번의 힌트를 참고하라. 
            선수는 Player 클래스로 작성하고, 2명의 선수는 배열로 구성하라. 
            그리고 게임은 GamblingGame 클래스로 작성하라.
            
             전자공학과 201835867 이다혜
*/

#include<iostream>
#include<string>
using namespace std;

//랜덤 정수 발생시키기 위해 사용
#include <cstdlib>
#include <ctime>

 
class Player{ //선수 클래스
    string name;
public:
    void setName(string name);
    string getName(){return name;};
};
 
class GamblingGame { //게임클래스
    Player *p = new Player[2]; //선수 배열로 구성
public:
    void nameSetting(); //이름세팅
    void start(); 
    string randomNum(string n); //랜덤 수 출력 / 비교
    ~GamblingGame() { delete [] p;} //인라인
};


void GamblingGame::nameSetting() { //이름세팅
    string name;
    cout << "첫번째 선수 이름>>";
    cin >> name;
    p[0].setName(name); //이름 입력받아서 p[0]저장
    cout << "두번째 선수 이름>>";
    cin >> name; 
    p[1].setName(name); //이름 입력받아서 p[1]저장
}
 
string GamblingGame::randomNum(string n){ // 랜덤 수 출력 및 비교
    int r[3]; //3개의 수 출력
    cout << "\t\t";
    for (int i = 0;i < 3;i++) { //3개의 수 출력
        r[i] = rand() %3 ; //랜덤 숫자는 0~3까지
        cout << r[i]<< "\t"; //숫자 사이 간격 /t
    }
    if(r[0]==r[1] && r[0]==r[2]) { //만약 세 수가 모두 같으면
        n ="님 승리!!";
        return n; 
    }
    else //다르면
        return "아쉽군요!";
}
 
void GamblingGame::start(){  //게임 시작
    string n;
    int i=2;
    while(true){
        string m;
        cout << p[i % 2].getName() << ":<Enter>" <<endl; // i%2='0' or '1' 
        getline(cin,n); //이름 받음
        m = p[i % 2].getName(); //m = p[0] 또는 p[1]의 선수 이름
        n = randomNum(n); //n = '님 승리!!' or '아쉽군요!'
            if(n=="님 승리!!") { //승리하면
                cout << m + n; //이름 님 승리!! 출력되고
                break; //while문 break => 게임 끝
            } 
            else {
                cout << n << endl;
            }
        i++; //다음 차례. 다시 while문 반복
    }
}
 
void Player::setName(string n){
    name = n;
}
 
int main(){
    cout << "***** 갬블링 게임을 시작합니다. *****\n";
    GamblingGame game; //game 객체 생성
    game.nameSetting();
    game.start();
}
