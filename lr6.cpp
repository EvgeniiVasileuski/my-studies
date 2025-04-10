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
	cout << "������� ��� �����: \n";
	cin >> filename;
	cin.ignore();
	strcat(filename, ".bin");
	if (fopen_s(&file, filename, "wb"))
	{
		cout << "������ �������� �����" << endl;
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
	cout << "������� ������: \n";
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
	cout << "�������������� ������: \n";
	cout << str << endl;
	system("pause");
}

void code()
{
	//������� 2
	int Q = 256, k = 127;
	char c1 = '\0';
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = c1 + (str[i] - c1 - k) % 256;
	}
	cout << "������ �����������" << endl;
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
	cout << "������ ������������" << endl;
	system("pause");
}
void save()
{
	FILE* file;
	char filename[50];
	cout << "������� ��� �����: \n";
	cin >> filename;
	cin.ignore();
	strcat(filename, ".txt");
	if (fopen_s(&file, filename, "w"))
	{
		cout << "������ �������� �����" << endl;
		return;
	}
	fputs(str, file);
	fclose(file);
	cout << "������ �������� � ���� \n";
	system("pause");
}

void load()
{
	FILE* file;
	char filename[50];
	cout << "������� ��� �����: \n";
	cin >> filename;
	cin.ignore();
	strcat(filename, ".txt");
	if (fopen_s(&file, filename, "r"))
	{
		cout << "������ �������� �����" << endl;
		return;
	}
	fgets(str, 79, file);
	fclose(file);
	cout << "������ c������ �� ���� \n";
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
		cout << "�������� ��������" << endl;
		cout << "1 ���� ������" << endl;
		cout << "2 ����� ������" << endl;
		cout << "3 ����������� ������" << endl;
		cout << "4 ������������ ������" << endl;
		cout << "5 �������� ������ � ��������� ����" << endl;
		cout << "6 ������� ������ �� ���������� �����" << endl;
		cout << "0 ��������� ������" << endl;
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
		default: cout << "������ ������ ���� ���" << endl;
			break;
		
		}
	}
}


void main()
{
	setlocale(LC_ALL, "russian");
	task2();
}