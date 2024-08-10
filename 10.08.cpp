#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> // для getline
using namespace std;

// Строки - string
// Строки - это не притивный тип данных, а класс, который обеспечивает верхнеуровную работу с текстом

const string LOGIN = "Nick", PASSWORD = "qweasdzxc123";

int main()
{
	string login;
	cout << "Enter login: "; cin >> login;
	if (LOGIN == login) {
		string password;
		cout << "Enter password: "; cin >> password;
		if (password == PASSWORD) {
			cout << "Welcome\n";
		}
		else {
			cout << "Error, password no correctly!\n";
		}
	}
	else {
		cout << "Error, '" << login << "' is not exisist\n";
	}

}
