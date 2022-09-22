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

void data::modify_s(_sex_type sex)
{
		switch (sex)
		{
		case male:
		{
			_sex = true;
			return;
		}
		case female:
		{
			_sex = false;
			return;
		}
		}
}

void data::modify_a(int age)
{
	_age = age;
	return;
}

data data::operator=(const data& l)
{
	_first_name = l._first_name;
	_last_name = l._last_name;
	_age = l._age;
	_sex = l._sex;
	return *this;
}

void data::swap(data& a,data& b)
{
	data tmp;
	tmp = a;
	a = b;
	b = tmp;
	return;
}

void data::modify_typ(_mod_type _typ)
{
	switch (_typ)
	{
	case error:
		return;
	case firstname:
	{
		string firstn;
		cout << "insert firstname:";
		cin >> firstn;
		modify_f(firstn);
		return;
	}
	case lastname:
	{
		string lastn;
		cout << "insert lastname:";
		cin >> lastn;
		modify_l(lastn);
		return;
	}
	case age:
	{
		int age_t;
		cout << "insert age:";
		cin >> age_t;
		modify_a(age_t);
		return;
	}
	case sex:
	{
		string sex_s;
		cout << "insert sex(male,female):";
		cin >> sex_s;
		modify_s(convert_to_sextyp(sex_s));
		return;
	}
	}
}

data::~data()
{
}