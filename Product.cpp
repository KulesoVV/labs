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

void Product::print() {
	cout << "Product(" << name << ", " << color << ", " << size << ")\n";
}

void Product::set_name(string product_name) {
	name = product_name;
}

string Product::get_name() {
	return name;
}

void Product::set_color(string product_color) {
	color = product_color;
}

string Product::get_color() {
	return color;
}

void Product::set_size(int product_size) {
	size = product_size;
}

int Product::get_size() {
	return size;
}


const Product& operator++(Product& obj) {
	obj.size++;
	return obj;
}


const Product operator++(Product& obj, int) {
	Product oldValue(" ", " ", obj.size);
	obj.size++;
	return oldValue;
}


const Product& operator--(Product& obj) {
	obj.size--;
	return obj;
}


const Product operator--(Product& obj, int) {
	Product oldValue(" "," ",obj.size);
	obj.size--;
	return oldValue;
}

