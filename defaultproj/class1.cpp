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
	cout << "age : " << _age;
	return;
}

void data::modify(string firstname, string lastname, int age, bool sex)
{
	_first_name = firstname;
	_last_name = lastname;
	_sex = sex;
	_age = age;
}

data::~data()
{
}