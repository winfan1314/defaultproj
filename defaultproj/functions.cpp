#include"class1.h"
//other functions

void swap_o(data& l, data& r)
{
	data tmp_o;
	tmp_o = l;
	l = r;
	r = tmp_o;
	return;
}

_mod_type convert_to_enum(string x)
{
	int it_t = 0;
	while (it_t++<10)
	{
		if (x == "firstname") return firstname;
		else if (x == "lastname") return lastname;
		else if (x == "sex") return sex;
		else if (x == "age") return age;
		else {
			cout << "invalid type\npls insert one of firstname,lastname,sex,age!\ninsert type:";
			cin >> x;
		}
	}
	cout << "too many wrong type operation failed" << endl;
	return error;
}

_sex_type convert_to_sextyp(string x)
{
	int it_t = 0;
	while (it_t++ < 10)
	{
		if (x == "male") return male;
		else if (x == "female") return female;
		else {
			cout << "invalid sex\npls insert one of male,female!\ninsert sex:";
			cin >> x;
		}
	}
	cout << "too many wrong sex operation failed" << endl;
}