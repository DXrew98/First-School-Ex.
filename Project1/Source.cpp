#include <iostream>

int main_exercise_conditionals(){

	/*
	int month = 0;

	std::cout << "Please input a number for a month to see how many days it has" << std::endl;
	std::cin >> month;

	switch (month) {
	case 1:  std::cout << "There are 31 days in January" << std::endl;   break;
	case 2:  std::cout << "There are 28 days in Febuary" << std::endl;   break;
	case 3:  std::cout << "There are 31 days in March" << std::endl;     break;
	case 4:  std::cout << "There are 30 days in April" << std::endl;     break;
	case 5:  std::cout << "There are 31 days in May" << std::endl;       break;
	case 6:  std::cout << "There are 30 days in June" << std::endl;      break;
	case 7:  std::cout << "There are 31 days in July" << std::endl;      break;
	case 8:  std::cout << "There are 31 days in August" << std::endl;    break;
	case 9:  std::cout << "There are 30 days in September" << std::endl; break;
	case 10: std::cout << "There are 31 days in October" << std::endl;   break;
	case 11: std::cout << "There are 30 days in November" << std::endl;  break;
	case 12:
		std::cout << "There are 31 days in December" << std::endl;
		break;
	default:
		std::cout << "Sorry! Thats not a month!" << std::endl;
		break;
	}
	*/
	
	int a = 0; //1
	int b = 0; //3
	int c = 0;

	std::cout << "Please input two numbers" << std::endl;
	std::cin >> a >> b;

	c = a;
	a = b;
	b = c;

	std::cout << "So a is " << a << "?" << std::endl;
	std::cout << "So b is " << b << "?" << std::endl;
	std::cout << "Sorry! I am only a computer so I get easily confused! :(" << std::endl;
	
	system("pause");
	return 0;
}