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
	void print() const;
	void set_name(string product_name);
	string get_name() const;
	void set_color(string product_color);
	string get_color() const;
	void set_size(int product_size);
	int get_size() const;
	Product& operator=(const Product& right);
	Product& operator++ ();
	Product operator++ (int);
	Product& operator-- ();
	Product operator-- (int);
	
};


#endif // PRODUCT_H_INCLUDED