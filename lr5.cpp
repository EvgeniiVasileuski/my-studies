#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

//void a1();
//bool b5(int x);
//bool b2(int x, int y, int z);
//void c3(int&, int, int);
//int* d4(int [], int);
//int* e(int**, int);
//int* e5(int**, int);
//
//void main()
//{
//	setlocale(LC_ALL, "russian");
//	//cout << "������� a1():";
//	//a1();
//	//cout << "������� b5():";
//	//int x;
//	//cout << "������� �����: ";
//	//cin >> x;
//	//if (b5(x))
//	//{
//	//	cout << "������ 11" << endl;
//	//}
//	//else cout << "�� ������ 11" << endl;
//	//int x, int y, int z;
//	//if (b2(x, y, z))
//
//	//{
//	//	cout << "������ �����" << endl;
//	//}
//	//else cout << "���������� �����" << endl;
//	//cout << "������� �:" << endl;
//	//int a, int b, int c;
//	//cin >> a >> b >> c;
//	//cout << "������� �:" << endl;
//	//cout << "���������� a = " << a << endl;
//	//c3(a, b, c);
//	//cmax(a, b, c);
//	//cout << "������� �:" << endl;
//	//cout << "���������� a = " << a << endl;
//	/*cout << "������� d:" << endl;*/
//	/*int array[] = { 3,5,0,-3,3,13,0,3 };
//	cout << "������:" << endl;
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) 
//	{
//		cout << array[i] << "|";
//	}
//	cout << endl;
//	int* pZero = d7(array, sizeof(array) / sizeof(array[0]));*/
//	/*if (pZero != NULL)
//	{
//		cout << "������ 0-� ������� " << *pZero << "�� ������: " << pZero << endl;
//	}
//	else cout << "������� ������� �� ������" << endl;*/
//	/*int* pMin = d4(array, sizeof(array) / sizeof(array[0]));
//	if (pMin != NULL)
//	{
//		cout << "����� ������� " << *pMin << "�� ������" << pMin << endl;
//	}*/
//	int const  size = 10;
//	srand(time(0));
//	int min = -10, max = 50;
//	int** array = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		array[i] = new int[size];
//		for (int j = 0; j < size; j++)
//		{
//			array[i][j] = min + rand() % (max - min + 1);
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout.width(4);
//			cout << array[i][j] << "\t";
//		}
//	}
//	cout << endl;
//	cout << endl;
//	int* result = e(array, size);
//	//for (int i = 0; i < size; i++)
//	//{
//	//	cout.width(4);
//	//	/*cout << result[i];*/
//	//	(result[i] == 0) ? cout << "���" : cout << result[i];
//	//}
//	int* result1 = e5(array, size);
//	for (int i = 0; i < size; i++)
//	{
//		cout.width(4);
//		cout << result[i];
//		/*(result[i] == 0) ? cout << "���" : cout << result[i];*/
//	}
//
//} 
//
//void a1() {
//	//��������� ����� ����� �� 27 �� 144 � ����� 3
//	int sum = 0;
//	for(int i =27; i<=144; i+=3)
//	{
//		sum += i;
//	}
//	cout << "����� = " << sum << endl;
//}
//
//bool b5(int x) 
//{
//	// ��������� �������� �� �������� ������� 11
//	return(x % 11 == 0) ? true : false;
//	//
//}
//bool b2(int x, int y, int z)
//{
//	// ��������� ����� �� ��������� ���������� ����
//	return (x*y<0)||(x*z<0)||(y*z<0);
//	//
//}
//
//void c3(int& a, int b, int c) 
//{
//	a = a * b * c;
//}
//
//void cmax(int& a, int b, int c)
//{
//	int max;
//	if (a > b && a > c) max = a;
//	else if (b > a && b > c) max = b;
//	else max = c;
//	a = max;
//}
//// ������ ������� �������
//int* d7(int array[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] == 0)
//		{
//			return &array[i];
//		}
//	}
//	return NULL;
//}
////����������� �������
//int* d4(int array[], int size)
//{
//	int* pMin = &array[0];
//	bool fl = false;
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] < *pMin)
//		{
//			pMin = &array[i];
//			fl = true;
//		}
//	}
//	return (fl ? pMin : NULL);
//}
//
//int* e(int** array, int size)
//{
//	int* result = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		result[i] = 0;
//		for (int j = 0; j < size; j++)
//		{
//			if (array[i][j] < 0)
//			{
//				result[i] = array[i][j];
//				break;
//			}
//		}
//	}
//	return result;
//}
//
//int* e5(int** array, int size)
//{
//	int* result1 = new int[size];
//	for (int j = 0; j < size; j++)
//	{
//		result1[j] = array[0][j];
//		for (int i = 0; i < size; i++)
//		{
//			if (result1[j] < array[i][j])
//			{
//				result1[j] == array[i][j];
//			}
//		}
//
//	}
//}
void a2();
void b7(int);
void c12(int&, int, int);
int* d12(int[], int);
int* e5(int**, int);
void main() {
	setlocale(LC_ALL, "russian");
	cout << "������� �():\n";
	a2();
	cout << "������� b():\n";
	int x;
	cout << "������� x:\n";
	cin >> x;
	b7(x);
	cout << "������� c():\n";
	int a, b, c;
	cin >> a >> b >> c;
	c12(a, b, c);
	cout << endl;
	cout << "max : " << a << endl;
	cout << "������� d():\n";
	int array[] = { -3,-5,0,-3,13,0,-3 };
	cout << "������: " << endl;
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		cout << array[i] << " | ";
	}
	cout << endl;
	if (d12(array, sizeof(array) / sizeof(array[0])) != NULL) {
		int* p = d12(array, sizeof(array) / sizeof(array[0]));
		cout << "����������� ������������� �������: " << *p << endl;
	}
	else cout << "NULL" << endl;;
	int const size = 10;
	srand(time(0));
	int min = -10, max = 50;
	int** ar = new int* [size];
	for (int i = 0; i < size; i++)
	{
		ar[i] = new int[size];
		for (int j = 0; j < size; j++) {
			ar[i][j] = rand() % (max - min + 1) + min;
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++) {
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	int* result = e5(ar, size);
	for (int i = 0; i < size; i++, result++) {
		cout << *result << "\t";

	}
	cout << endl;
}
void a2() {
	//��������� ����� ���� ������ ����� �� 120 �� 316
	int sum = 0;
	for (int i = 120; i <= 316; i += 2) {
		sum += i;
	}
	cout << "����� :" << sum << endl;
}
void b7(int x) {
	//�������� ����� �� ��������
	bool fl=(x % 2==0) ? true : false;
	if (fl)cout << "������\n";
	else cout << "��������\n";
}
void c12(int& a,int b,int c) {
	//������� �������� 3-� ����� � ����������� ������� ���������
	int max = a;
	if (b > a && b > c)max = b;
	else if (c > b && c > a)max = c;
	else max = a;
	a = max;
}
int* d12(int ar[], int N) {
	//����������� ������������� ������� �������
	int* min=&ar[0];
	bool fl = false;
	for (int i = 0; i < N; i++) {
		if (ar[i] > 0) { *min = ar[i]; fl = true; break; }
	}

	for (int i = 0; i < N; i++) {
		if (ar[i] > 0 && ar[i] < *min) *min = ar[i];
	}
	return (fl?min:NULL);
}
int* e5(int** array, int size) {
	//���������� ������ � ��� ��������� �������� ����������� �������
	int* result = new int[size];
	for (int j = 0; j < size;j++) {
		int *max = &array[0][j];
		for (int i = 0; i < size; i++) {
			if (array[i][j] > *max) *max = array[i][j];
		}
		result[j] = *max;
	}
	return result;
}




