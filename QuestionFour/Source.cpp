#include <iostream>
using namespace std;
#include <Windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    char a, b, c, d ;
	int ft, vt;

	cout << "������� ����� ��� ����� ���������� ��������: " << endl;
	cin >> a >> b;
	ft = a;
	vt = b;
	cout << "\n������� ����� ��� ������� �������������� ��������: " << endl;
	cin >> c >> d;
	cout << "\n������������� �������� ������ �����: " << ft << endl;
	cout << "\n������������� �������� ������ �����: " << vt << endl;

    cout <<"\n������������� �������� ������� : " << (int)a << endl;
	cout << "\n������������� �������� �������: " << (int)b << endl;
	
	
   

}