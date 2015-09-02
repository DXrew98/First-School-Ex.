#include<iostream>
#include<cstring>

//char name();
//void input(char name[], int a);
char username();
char password();


int main_CharArrays() {

	username();
	password();

	system("pause");
	return 0;
}

char username() {
	char userName[9];

	std::cout << "Please create your username" << std::endl;
	std::cout << "It must be at least 8 characters" << std::endl;
	std::cin.getline(userName, 9);
	std::cout << "Your username is: " << userName << std::endl;
	return userName[9];
}

char password() {
	char passWord[9];
	bool passGood = false;


	while (!passGood)
	{
		std::cout << "Please create your password" << std::endl;
		std::cout << "It must be at least 8 characters" << std::endl;
		std::cout << "and include one symbol, number and uppercase" << std::endl;
		std::cin.getline(passWord, 9);


		for (int i = 0; i < 9; ++i) {
			if (passWord[i] == 'A' <= passWord[i] && passWord[i] <= 'Z') passGood = true;
			if (passWord[i] == '0' <= passWord[i] && passWord[i] <= '9') passGood = true;
			if (passWord[i] == 'a' <= passWord[i] && passWord[i] <= 'z') passGood = true;
			if (passWord[i] == ' ' <= passWord[i] && passWord[i] <= '~') passGood = true;
		}
		if (passGood == true) std::cout << "Your password is: " << passWord << std::endl;
		else std::cout << "Error: Please input new password" << std::endl;
	}
	return 0;
}

/*
char name() {
	char first [5] [20];
	char last  [5] [20];
	std::cout << "Please input your first name press enter then your last name" << std::endl;

	//input(first, 20);
	//input(last, 20);

	//Get name input from user
	for (int i = 0; i < 5; ++i) {
		std::cin.getline(first[i], 20);
		std::cin.getline(last[i], 20);
		
	}

	//Print out names is reberse order
	for (int i = 0; i < 5; ++i) {
		std::cout << last[i] << "\n";
		std::cout << first[i] << "\n";
	}
	

	return 0;
}
*/

//void input(char name[], int a)
//{
//	for (int i = 0; i < a; ++i) {
//		std::cin >> name[i];
//	}
////	return name[20];
//}