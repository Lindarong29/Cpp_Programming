/* 
    3. Ű����κ��� �� ���� ������ �о� ū ���� ȭ�鿡 ����϶�.

             ���ڰ��а� 201835867 �̴���
*/

#include <iostream>
using namespace std;

int main(){
	int num1, num2;

	cout << "�� ���� �Է��϶�>>";
	cin >> num1 >> num2;

    int Bigger =  num1 > num2 ? num1 : num2 ;

	cout << "ū �� =" << " " << ("%d\n", Bigger);
}