#include <iostream>
using namespace std;
#include <Windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    char a, b, c, d ;
	int ft, vt;

	cout << "¬ведите любые две буквы латинского алфавита: " << endl;
	cin >> a >> b;
	ft = a;
	vt = b;
	cout << "\n¬ведите любые два символа математических операций: " << endl;
	cin >> c >> d;
	cout << "\nцелочисленное значение первой буквы: " << ft << endl;
	cout << "\nцелочисленное значение второй буквы: " << vt << endl;

    cout <<"\nцелочисленное значение символа : " << (int)a << endl;
	cout << "\nцелочисленное значение символа: " << (int)b << endl;
	
	
   

}