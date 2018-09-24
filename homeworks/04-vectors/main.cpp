//write include statement for vectors header
#include<iostream>
#include "vectors.h"
//write include statement for cout object
using std::cout; using std::endl;


//dont forget using statement for cout object
int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max
	vector <int> numbers = { 5, 4, 1, 50, 6, 77, 0 };
	cout << "Max of vector vals 4, 5, 1, 50, 6, 70, 0: " << get_max_from_vector(numbers) << endl;
	

	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result
	numbers = { 2,3,4 };
	cout << "Square of sums 2, 3, 4: " << sum_of_squares(numbers) << endl;


	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"
	vector<string> names = {"Joe", "joe", "mary"};
	for (auto i : names)
	{
		cout << i << " ";
	}
	cout << endl;
	
	replace(names, "joe", "John");
	for (auto i : names)
	{
		cout << i << " ";
	}
	cout << endl;

	
	//write code to call is_prime with value 3 output result
	//auto prime_checker = is_prime(3);
	//cout << prime_checker;

	int num = 3;
	cout << "is " << num << " prime? " << is_prime(num) << endl;



	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector

	int num2 = 50;
	vector<int> primes = vector_of_primes(num2);
	
	cout << "Prime numbers from 1 to " << num2;

	for (auto i : primes)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}