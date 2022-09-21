#include"class1.h"

data::data()
{
	_first_name = "firstname";
	_last_name = "lastname";
	_age = 0;
	_sex = false;
}

data::data(string firstname, string lastname, int age, bool sex)
{
	_first_name = firstname;
	_last_name = lastname;
	_sex = sex;
	_age = age;
}

void data::print()
{
	cout << "Name : " << _first_name << ' ' << _last_name << endl;
	cout << "sex : ";
	if (_sex) cout << "male ,";
	else cout << "female ,";
	cout << "age : " << _age<<endl;
	return;
}

void data::modify(string firstname, string lastname, int age, bool sex)
{
	_first_name = firstname;
	_last_name = lastname;
	_sex = sex;
	_age = age;
	return;
}

void data::modify_f(string firstname)
{
	_first_name = firstname;
	return;
}

void data::modify_l(string lastname)
{
	_last_name = lastname;
	return;
}

void data::modify_s(bool sex)
{
	_sex = sex;
	return;
}

void data::modify_a(int age)
{
	_age = age;
	return;
}

data data::operator=(const data& l)
{
	data temp;
	temp._first_name = l._first_name;
	_first_name = l._first_name;
	temp._last_name = l._last_name;
	_last_name = l._last_name;
	temp._age = l._age;
	_age = l._age;
	temp._sex = l._sex;
	_sex = l._sex;
	return temp;
}

void data::swap(data& a,data& b)
{
	data tmp;
	tmp = a;
	a = b;
	b = tmp;
	return;
}

data::~data()
{
}