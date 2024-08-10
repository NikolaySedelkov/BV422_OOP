#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> // для getline
using namespace std;

// Строки - string
// Строки - это не притивный тип данных, а класс, который обеспечивает верхнеуровную работу с текстом

int main()
{
	// Сравнение строк
	string str1 = "qwe", str2 = "qwe";

	if (str1 == str2) {
		cout << "СТроки стравниваются по значения";
	}
}
