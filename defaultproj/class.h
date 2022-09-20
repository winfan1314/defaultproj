#pragma once

class data
{
public:
	data();
	~data();
	data(std::string, std::string, int, int);
	
private:
	std::string _first_name;
	std::string _last_name;
	bool _sex;
	int _age;
};

data::data()
{
	_first_name = "firstname";
	_last_name = "lastname";
	_age = 0;
	_sex = 0;
}

data::data(std::string firstname, std::string lastname,int age,int sex)
{
	_first_name = firstname;
	_last_name = lastname;
	_sex = sex;
	_age = age;
}

data::~data()
{
}