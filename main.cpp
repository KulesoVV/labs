#include <iostream>
#include <string>
#include "Product.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int a,i=0;
	Product obj1("Шарф","Красный",10);
	Product obj2("Куртка", "Синяя", 5);
	while (i != 1) {
		cout << "Меню:" << endl;
		cout << "0. Выход" << endl;
		cout << "1. Операция ++" << endl;
		cout << "2. Операция --" << endl;
		cout << "3. Операция =" << endl;
		cin >> a;
		switch (a) {
		case 0:
			i = 1;
			break;
		case 1:
			cout << "Продукт до операции:" << endl;
			obj1.print();
			obj1++;
			cout << "Продукт после операции:" << endl;
			obj1.print();
			break;
		case 2:
			cout << "Продукт до операции:" << endl;
			obj1.print();
			obj1--;
			cout << "Продукт после операции:" << endl;
			obj1.print();
			break;
		case 3:
			cout << "Присваниваем поля name и color первому продукту." << endl;
			cout << "Первый продукт до присвоения:" << endl;
			obj1.print();
			cout << "Второй продукт:" << endl;
			obj2.print();
			obj1 = obj2;
			cout << "Первый продукт после присвоения:" << endl;
			obj1.print();
			break;

		default:
			cout << "Вы ввели неверный пункт в меню." << endl;
			break;

		}
		system("pause");
		system("cls");
	}
	return 0;
}
