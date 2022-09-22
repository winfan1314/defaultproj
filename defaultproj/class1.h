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
enum _colors { red, blue, orange, yellow, white, green, indigo, violet };
enum _mod_type { firstname, lastname, sex, age, error };
enum _sex_type { male, female };
_mod_type convert_to_enum(string);
_sex_type convert_to_sextyp(string);
class data
{
public:
	data();
	~data();
	data(string, string, int, bool);
	void print();
	void modify(string, string, int, bool);
	void modify_typ(_mod_type);
	data operator=(const data&);
	void swap(data&, data&);

private:
	string _first_name;
	string _last_name;
	bool _sex;
	int _age;
	void modify_f(string);
	void modify_l(string);
	void modify_s(_sex_type);
	void modify_a(int);
};