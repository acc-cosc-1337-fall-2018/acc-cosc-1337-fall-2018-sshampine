#include "basics.h"

int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

void pass_by_val_by_ref(int val, int& ref)
{
	val = 99;
	ref = 99;
}
