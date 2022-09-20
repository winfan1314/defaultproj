#pragma once

class data
{
public:
	data();
	~data();
	
private:
	std::string _first_name;
	std::string _last_name;
	bool sex;
	int age;
};

data::data()
{
}

data::~data()
{
}