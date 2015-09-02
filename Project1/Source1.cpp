#include <iostream>


int main_exercise_loops() {

	for (int i = 0; i < 100; i++)
	{

		if ((i % 3 == 0) && (i % 5 == 0) && i != 0) { std::cout << "FizzBuzz" << std::endl; continue; }
		if (i % 5 == 0 && i != 0)                   { std::cout << "Buzz" << std::endl; continue; }
		if (i % 3 == 0 && i != 0)                   { std::cout << "Fizz" << std::endl; continue; }
			                                              std::cout << i << std::endl;

		

	}
	system("pause");
	int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		sum = sum + i;
	}
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}