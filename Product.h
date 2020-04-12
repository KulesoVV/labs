#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
#include <string.h>
#include <iostream>
using namespace std;
class Product {
private:
	string name;
	string color;
	int size;
public:
	Product();
	Product(const Product& product);
	Product(string t_name, string t_color, int t_size);
	void print();
	void set_name(string product_name);
	string get_name();
	void set_color(string product_color);
	string get_color();
	void set_size(int product_size);
	int get_size();
	friend const Product& operator++(Product& i);
	friend const Product operator++(Product& i, int);
	friend const Product& operator--(Product& i);
	friend const Product operator--(Product& i, int);
	Product& operator=(const Product& right) {
		name = right.name;
		color = right.color;
		return *this;
	}
};


#endif // PRODUCT_H_INCLUDED
