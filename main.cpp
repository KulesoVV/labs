#include <iostream>
#include <string>
#include "Product.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int a,i=0;
	Product obj1("����","�������",10);
	Product obj2("������", "�����", 5);
	while (i != 1) {
		cout << "����:" << endl;
		cout << "0. �����" << endl;
		cout << "1. �������� ++" << endl;
		cout << "2. �������� --" << endl;
		cout << "3. �������� =" << endl;
		cin >> a;
		switch (a) {
		case 0:
			i = 1;
			break;
		case 1:
			cout << "������� �� ��������:" << endl;
			obj1.print();
			obj1++;
			cout << "������� ����� ��������:" << endl;
			obj1.print();
			break;
		case 2:
			cout << "������� �� ��������:" << endl;
			obj1.print();
			obj1--;
			cout << "������� ����� ��������:" << endl;
			obj1.print();
			break;
		case 3:
			cout << "������������ ���� name � color ������� ��������." << endl;
			cout << "������ ������� �� ����������:" << endl;
			obj1.print();
			cout << "������ �������:" << endl;
			obj2.print();
			obj1 = obj2;
			cout << "������ ������� ����� ����������:" << endl;
			obj1.print();
			break;

		default:
			cout << "�� ����� �������� ����� � ����." << endl;
			break;

		}
		system("pause");
		system("cls");
	}
	return 0;
}
