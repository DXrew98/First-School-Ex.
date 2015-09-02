#include<iostream>
#include<climits>
#include <ctime>

int main_exercise_arrays() {

	/*
	int data[10]{ 10,9,8,7,6,5,4,3,2,1 };

	for (int i = 0; i < 10; i++)
		std::cout << data[i] << std::endl;


	system("pause");

	*/

	/*
	std::cout << "Please input 5 numbers" << std::endl;
	int numbers[5];
	std::cin >> numbers[4] >> numbers[3] >> numbers[2] >> numbers[1] >> numbers[0];
	for (int i = 0; i < 5; i++)
		std::cout << numbers[i] << std::endl;

	system("pause");
	return 0;
	*/
	 
	/*
	std::cout << "Please input 10 numbers" << std::endl;
	int com[10];
	std::cin >> com[0] >> com[1] >> com[2] >> com[3] >> com[4] >> com[5] >> com[6] >> com[7] >> com[8] >> com[9];

	int highestnum = INT_MIN;
	int lowestnum = INT_MAX;

	for (int i = 0; i < 10; ++i)
	{
		if (highestnum < com[i])
			highestnum = com[i];

		if (lowestnum > com[i])
			lowestnum = com[i];
	}

	std::cout << "Your Highest Number is: " << highestnum << "\n" << "Your Lowest Number is: " << lowestnum << "\n";

	system("pause");
	return 0;
	*/

	/*
	int map[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int row = 0; row < 3; ++row)
	{
		for (int col = 0; col < 3; ++col)
		{
			map[row][col] = (row * 3 + col) + 1;
			std::cout << map[row][col];

		}
		std::cout << std::endl;
	}

	system("pause");
	return 0;

	*/
	//srand(time(0));

	/*
	int days[29][5];
	int sumRow = 0, sumCol = 0;

	//create random numbers in array
	for (int row = 0; row < 29; ++row)
	{
		for (int col = 0; col < 5; ++col) 
		{
			days[row][col] = col; //rand(); // 0-65355
			std::cout << days[row][col] << " ";
		}
		std::cout << std::endl;
	}

	//Computes a prints rows
	for (int rows = 0; rows < 29; ++rows)
		{
			sumRow = 0;

			for (int cols = 0; cols < 5; ++cols)
			{
				sumRow += days[rows][cols];
			}
			std::cout << sumRow << std::endl;
		}
	//computes and prints columns
	for (int cols = 0; cols < 5; ++cols)
	{
		sumCol = 0;
		for (int rows = 0; rows < 29; ++rows)
		{
			sumCol += days[rows][cols];
		}
		std::cout << sumCol << std::endl;
	}
	std::cout << std::endl;
	//std::cout << sumRow;


	system("pause");
	return 0;
	*/

system("pause");
return 0;
}