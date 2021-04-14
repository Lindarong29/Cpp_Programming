/* 
        14. �׺� ������ ������. �� ����� ������ �����ϸ�, ������ �̸��� �ʱ⿡ �Է� �޴´�.
            ������ ������ �ڽ��� ���ʿ��� <Enter> Ű�� ġ�� 
            ������ 3���� ���� �����ǰ� ��� ������ ���� ������ ���ӿ��� �̱�� �ȴ�.
            ������ ������ �ʹ� ũ�� 3���� ���ڰ� ��ġ�� ���ɼ��� ���� ������ ������ 0~2�� �����Ѵ�.
            ���� ���� ������ ���� 5���� ��Ʈ�� �����϶�. 
            ������ Player Ŭ������ �ۼ��ϰ�, 2���� ������ �迭�� �����϶�. 
            �׸��� ������ GamblingGame Ŭ������ �ۼ��϶�.
            
             ���ڰ��а� 201835867 �̴���
*/

#include<iostream>
#include<string>
using namespace std;

//���� ���� �߻���Ű�� ���� ���
#include <cstdlib>
#include <ctime>

 
class Player{ //���� Ŭ����
    string name;
public:
    void setName(string name);
    string getName(){return name;};
};
 
class GamblingGame { //����Ŭ����
    Player *p = new Player[2]; //���� �迭�� ����
public:
    void nameSetting(); //�̸�����
    void start(); 
    string randomNum(string n); //���� �� ��� / ��
    ~GamblingGame() { delete [] p;} //�ζ���
};


void GamblingGame::nameSetting() { //�̸�����
    string name;
    cout << "ù��° ���� �̸�>>";
    cin >> name;
    p[0].setName(name); //�̸� �Է¹޾Ƽ� p[0]����
    cout << "�ι�° ���� �̸�>>";
    cin >> name; 
    p[1].setName(name); //�̸� �Է¹޾Ƽ� p[1]����
}
 
string GamblingGame::randomNum(string n){ // ���� �� ��� �� ��
    int r[3]; //3���� �� ���
    cout << "\t\t";
    for (int i = 0;i < 3;i++) { //3���� �� ���
        r[i] = rand() %3 ; //���� ���ڴ� 0~3����
        cout << r[i]<< "\t"; //���� ���� ���� /t
    }
    if(r[0]==r[1] && r[0]==r[2]) { //���� �� ���� ��� ������
        n ="�� �¸�!!";
        return n; 
    }
    else //�ٸ���
        return "�ƽ�����!";
}
 
void GamblingGame::start(){  //���� ����
    string n;
    int i=2;
    while(true){
        string m;
        cout << p[i % 2].getName() << ":<Enter>" <<endl; // i%2='0' or '1' 
        getline(cin,n); //�̸� ����
        m = p[i % 2].getName(); //m = p[0] �Ǵ� p[1]�� ���� �̸�
        n = randomNum(n); //n = '�� �¸�!!' or '�ƽ�����!'
            if(n=="�� �¸�!!") { //�¸��ϸ�
                cout << m + n; //�̸� �� �¸�!! ��µǰ�
                break; //while�� break => ���� ��
            } 
            else {
                cout << n << endl;
            }
        i++; //���� ����. �ٽ� while�� �ݺ�
    }
}
 
void Player::setName(string n){
    name = n;
}
 
int main(){
    cout << "***** ���� ������ �����մϴ�. *****\n";
    GamblingGame game; //game ��ü ����
    game.nameSetting();
    game.start();
}
