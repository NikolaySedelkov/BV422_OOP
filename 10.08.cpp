#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> // для getline
using namespace std;

// Строки - string
// Строки - это не притивный тип данных, а класс, который обеспечивает верхнеуровную работу с текстом

int main()
{
	// Строки - это массивы символов, то можно применять индексацию
	string str;
	cout << "Enter word: "; cin >> str;

	cout << str[0] << ' ' << str[2] << ' ' << str[4] << endl;
	// Можно проиндексироваться по всей строке, но для этого нужно знать её размер
	// Для того, что бы узнать размер строки - используем метод 'size'

	cout << "Length '" << str << "' = " << str.size() << endl;

	for (int i = 0; i < str.size(); ++i) {
		cout << "[" << i << "]:\t" << str[i] << endl;
	}
}
