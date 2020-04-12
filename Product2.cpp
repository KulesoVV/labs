#include "Product.h"
#include <iostream>
#include <string.h>

Product::Product() : name("UnknownName"), color("UnknownColor"), size(0) {}

Product::Product(const Product& product) {
	name = product.name;
	color = product.color;
	size = product.size;
}

Product::Product(string t_name, string t_color, int t_size) {
	name = t_name;
	color = t_color;
	size = t_size;
}

void const Product::print() {
	cout << "Product(" << name << ", " << color << ", " << size << ")\n";
}

void Product::set_name(string product_name) {
	name = product_name;
}

string const Product::get_name() {
	return name;
}

void Product::set_color(string product_color) {
	color = product_color;
}

string const Product::get_color() {
	return color;
}

void Product::set_size(int product_size) {
	size = product_size;
}

int const Product::get_size() {
	return size;
}

Product& Product::operator++ ()
{
	size ++;
	return *this;
}
Product Product::operator++ (int)
{
	Product prev = *this;
	++* this;
	return prev;
}
Product& Product::operator-- ()
{
	size --;
	return *this;
}
Product Product::operator-- (int)
{
	Product prev = *this;
	--* this;
	return prev;
}
Product& Product::operator=(const Product& right) {
	name = right.name;
	color = right.color;
	return *this;
}