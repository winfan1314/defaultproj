#include<iostream>
#include"class1.h"
using std::cout;
using std::endl;

data::data()
{
	_first_name = "firstname";
	_last_name = "lastname";
	_age = 0;
	_sex = 0;
}

data::data(std::string firstname, std::string lastname, int age, int sex)
{
	_first_name = firstname;
	_last_name = lastname;
	_sex = sex;
	_age = age;
}

data::~data()
{
}