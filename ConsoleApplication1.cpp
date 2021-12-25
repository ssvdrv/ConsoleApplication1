// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

bool check(char* s, char* p)
{
	char* rp = 0;
	char* rs = 0;
	while (1)
		if (*p == '*')
			rs = s, rp = ++p;
		else if (!*s)
			return !*p;
		else if (*s == *p || *p == '?')
			++s, ++p;
		else if (rs)
			s = ++rs, p = rp;
		else
			return false;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Маска: ";
	char pttrn[1000]; char str[10000];
	scanf("%s", pttrn); // Ввод маски
	std::cout << "Строка: ";
	scanf("%s", str);
	std::cout << "Ответ: ";
	if (check(str, pttrn)) cout << "true";
	else cout << "false";
}