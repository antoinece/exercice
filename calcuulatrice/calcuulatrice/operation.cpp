#include <iostream>
#include "operation.h"



int add(int a, int b)
{

	return a+b;

}

int subsatrct(int a, int b)
{
	return a-b;
}

float divided(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	else
	{
		return a / b;
	}
}

int multipy(int a, int b)
{
	return a*b;
}
