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