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
	void const print();
	void set_name(string product_name);
	string const get_name();
	void set_color(string product_color);
	string const get_color();
	void set_size(int product_size);
	int const get_size();
	Product& operator=(const Product& right);
	Product& operator++ ();
	Product operator++ (int);
	Product& operator-- ();
	Product operator-- (int);
	
};


#endif // PRODUCT_H_INCLUDED