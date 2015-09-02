#include <iostream>



struct Player {
	//Players Stats
	char name [128];
	int health;
	int score;
	float positionX;
	float positionY;
	float velocity;
};

struct Rect {
	float minX;
	float minY;

	float maxX;
	float maxY;

	int color[3];
};

int playerGO() {
	//Initalization and loading
	Player players[5];

	for (int i = 0; i < 5; ++i)
	{
		//Initialize and get info for name and score
		players[i] = {};
		std::cout << "Please tell us your name and score:" << std::endl;
		std::cin >>(players[i].name);
		std::cin >> players[i].score;

		//Print out each player name and score
		std::cout << std::endl;
		std::cout << "Your name is :" << players[i].name << std::endl << "Score" << -players[i].score << std::endl;
		
	}
	return 0;
}

struct Item {
	char name[20];
	int cost;
	int quantity;
};

struct Shop {
	int currentGold;
};

int runShop(){
	//Intialization
	Shop shop;
	Item item[3];
	
	item[0] = { "Bow", 10, 2 };
	item[1] = { "Arrow", 2, 50 };
	item[2] = { "Sword", 30, 1 };

	shop.currentGold = 100;
	

	//Printing out items and gold
	std::cout << "Hello shop keeper! Here are the items in your shop" << std::endl;
	for (int i = 0; i < 3; ++i) {
		std::cout << item[i].name << " Cost:" << item[i].cost << " Quantity:" << item[i].quantity << std::endl;
	}
	std::cout << std::endl << "And here is your funds for the day:" << shop.currentGold << std::endl;

	//Asking if the player would like to change the price of anything
	
	char y = 'y', n = 'n';

	std::cout << std::endl << "Would you like to change the price of anything? y or n" << std::endl;
	
	if (std::cin >> y)
	{
		std::cout << "Which would you like to change?" << std::endl;
		
	}


	return 0;
}

int main() {
	//run function
	//playerGO();
	runShop();

	system("pause");
	return 0;
}