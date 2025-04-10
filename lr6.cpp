#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

char str[80];

void task1()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str;
	FILE* file;
	char filename[50];
	cout << "Введите имя файла: \n";
	cin >> filename;
	cin.ignore();
	strcat(filename, ".bin");
	if (fopen_s(&file, filename, "wb"))
	{
		cout << "Ошибка открытия файла" << endl;
		return;
	}
	int i = 1;
	while(true)
	{
		cout << i << ": ";
		getline(cin, str);
		fprintf(file, "%d %s \n", i, str);
		if (str == "00") { break; }
		i++;
		
	} 
	fclose(file);

}

void input()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "введите строку: \n";
	cin.ignore();
	setlocale(LC_ALL, "RUS");
	gets_s(str, 79);
	system("pause");
}
void output()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	cout << "Результирующая строка: \n";
	cout << str << endl;
	system("pause");
}

void code()
{
	//Вариант 2
	int Q = 256, k = 127;
	char c1 = '\0';
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = c1 + (str[i] - c1 - k) % 256;
	}
	cout << "Строка зашифрована" << endl;
	system("pause");
}

void decode()
{
	int Q = 256, k = 127;
	char c1 = '\0';
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = c1 + (str[i] - c1 + k) % 256;
	}
	cout << "Строка расшифрована" << endl;
	system("pause");
}
void save()
{
	FILE* file;
	char filename[50];
	cout << "Введите имя файла: \n";
	cin >> filename;
	cin.ignore();
	strcat(filename, ".txt");
	if (fopen_s(&file, filename, "w"))
	{
		cout << "Ошибка открытия файла" << endl;
		return;
	}
	fputs(str, file);
	fclose(file);
	cout << "Строка записана в файл \n";
	system("pause");
}

void load()
{
	FILE* file;
	char filename[50];
	cout << "Введите имя файла: \n";
	cin >> filename;
	cin.ignore();
	strcat(filename, ".txt");
	if (fopen_s(&file, filename, "r"))
	{
		cout << "Ошибка открытия файла" << endl;
		return;
	}
	fgets(str, 79, file);
	fclose(file);
	cout << "Строка cчитана из файл \n";
	system("pause");
}

void task2()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int pr;
	while (true)
	{
		system("cls");
		system("color 3F");
		cout << "Выберите действие" << endl;
		cout << "1 Ввод строки" << endl;
		cout << "2 Вывод строки" << endl;
		cout << "3 Зашифровать строку" << endl;
		cout << "4 Расшифровать строку" << endl;
		cout << "5 Записать строку в текстовый файл" << endl;
		cout << "6 Считать строку из текстового файла" << endl;
		cout << "0 Завершить работу" << endl;
		cin >> pr;
		switch (pr)
		{
		case 1: input(); break;
		case 2: output(); break;
		case 3: code(); break;
		case 4: decode(); break;
		case 5: save(); break;
		case 6: load(); break;

		case 0: exit(0); break;
		default: cout << "Такого пункта меню нет" << endl;
			break;
		
		}
	}
}


void main()
{
	setlocale(LC_ALL, "russian");
	task2();
}