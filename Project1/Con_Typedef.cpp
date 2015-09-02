#include <iostream>
//
//extern char choice;
//extern int flag;
//extern long date, time;
//int main()
//{
//
//}
//double factor;
//double watts()
//{
//
//}
//double thrust()
//{
//
//}
//
//char bondType;
int callNum(int x);
int galToLiters();

//void callNum_Terr()
//{
//	static int count;
//	count++;
//	std::cout << "I have been called " << count << " times" << std::endl;
//}

int main_Typedef() 
{


	galToLiters();

	system("pause");
	return 0;
	
}

int galToLiters() {
	const double liter = 3.78533;
	double gal = 0;
	double conversion;

	std::cout << "How many gallons would you like to convert?" << std::endl;
	std::cin >> gal;
	conversion = gal * liter;
	std::cout << "That is " << conversion << "Liters" << std::endl;

	return 0;
}



//int callNum(int x) {
//
//	for (int i = 0; i < x; ++i); {
//		std::cout << "I have been called " << x << " times" << std::endl;
//	}
//
//	return 0;
//}