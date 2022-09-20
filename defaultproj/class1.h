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