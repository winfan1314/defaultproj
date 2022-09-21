#pragma once
#include <cstring>
#include <iostream>
#include <conio.h>
#include <tuple>
#include <ctime>
#include <stdio.h>
#include <cstring>
using std::string;
using std::cout;
using std::endl;
using std::cin;
class data
{
public:
	data();
	~data();
	data(string, string, int, bool);
	void print();
	void modify(string, string, int, bool);
	void modify_f(string);
	void modify_l(string);
	void modify_s(bool);
	void modify_a(int);
private:
	string _first_name;
	string _last_name;
	bool _sex;
	int _age;
};