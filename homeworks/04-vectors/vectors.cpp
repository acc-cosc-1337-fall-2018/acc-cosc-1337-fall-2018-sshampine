#include "vectors.h"

int get_max_from_vector(vector<int>& numbers)
{
	//write your code here
	int max_num{0};
	for (int i = 0; i <= numbers.size() - 1; ++i) {
		if (numbers[i] > max_num) {
			max_num = numbers[i];
		}
	}

	return max_num;
}

//write the code for sum_of_squares function here
int sum_of_squares(vector<int>& numbers)
{
	int sum{0};

	for (int i = 0; i <= numbers.size() - 1; ++i) {
		sum += (numbers[i] * numbers[i]);
	}

	return sum;
}


//write the code for function replace here
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)


}

//write is_prime function code here
int is_prime(int number)
{
	//iterate through up to value of number times
	//for each iteration; the number is prime if the iterator % number == 0 only. 
	
		for (int i = 2; i < number; ++i){
			if ( number % i == 0) 
			{
			return false;
			}
			
		}
	
		return true;
}



//write vector_of_primes function code here
int vector_of_primes(int n)
{
/*	vector<int> primes{};
	for (int i = 1; i < n; ++i)
	{
		if (is_prime(i) == true)
		{
			primes.push_back[i];
		}
	}
*/
	return 0; 
}