#include<iostream>
#include<cstdlib>

/*
float min(float a, float b);
float min(float a, float b, float c);

float main(){
	float a, b;
	
	std::cout << "Enter value 1: ";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "Enter value 2: ";
	std::cin >> b;
	std::cout << std::endl;

	min(a, b);

	std::cout << "the smallest numeber is : " << min(a,b) << std::endl;
	
	system("pause");
	return 0;

system("pause");
return 0;
}

float min(float a, float b){
	if (a < b)
		return a;
	else
		return b;
}

float min(float a, float b, float c){

}
*/
/*
float Half(float number);

float main() {

	float number = 16.721f;
	float result = Half(number);
	std::cout << result;

	system("pause");
	return 0;
}

float Half(float number) {
	number /= 2;
	return number;
}
*/
//enxponential
//int expo(int a, int b);
//int expoPrint();
//factorials
//int fact(int a);
//int factPrint(int a);
//7
//int sumTo(int n);
//int sumToTest();
//8
//int sumArrayOut();
//int sumArray(int integer_ar[], int b);
//9
//int minArrayOut();
//int minInArray(int integer_ar[], int b);
//10
//int multiArray();
//int MultiplyByIndex(int int_ar1[], int int_ar2[], int b);
//11
//int funkAddout();
//int funkAdd(int aryA[], int aryB[], int c, int aryOut[]);
//12

int main_functions() {
	


	system("pause");
	return 0;
}





/*
int funkAddout() {
	int arrayA[3] = { 1, 3, 10 };
	int arrayB[3] = { 2, 5, 5 };
	int arrayOut[3];
	funkAdd(arrayA, arrayB, 3, arrayOut);
		for (int i = 0; i < 3; ++i) {
			std::cout << arrayOut[i] << std::endl;
		}
	return 0;
}

int funkAdd(int aryA[], int aryB[], int c, int aryOut[]) {
	for (int i = 0; i < c; ++i) {
		aryOut[i] = aryA[i] + aryB[i];
	}
	return aryOut[3];
}
*/

/*
int multiArray() {
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int output_array[7] = {};
	MultiplyByIndex(integer_array, output_array, 7);
	//output_array should be {0, 15, 14, 12, 52, 95, 48};
	for (int i = 0; i < 7; ++i) {
		std::cout << output_array[i] << std::endl;
	}
	return 0;
}int MultiplyByIndex(int int_ar1[], int int_ar2[], int b) {
	for (int i = 0; i < b; ++i) {
		int_ar2[i] = int_ar1[i] * i ;
	}
	return int_ar2[7];
}*/

/*
int minArrayOut() {

	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int result = minInArray(integer_array, 7); //result = 4
	std::cout << result << std::endl;	return 0;
}


int minInArray(int integer_ar[], int b) {
	int sum = 33333;

	for (int i = 0; i < b; ++i) {
		if (sum > integer_ar[i]) { 
				sum = integer_ar[i]; };
	}

	return sum;
}
*/

/*
int sumArrayOut() {
	int integer_array[5] = { 7, 3, 2, 4, 9 };
	int result = sumArray(integer_array, 5); //result = 25
	std::cout << result << std::endl;
	return 0;
}


int sumArray(int integer_ar[], int b) {
	int sum = 0;

	for (int i = 0; i < b; ++i) {
		sum = sum + integer_ar[i];
	}

	return sum;
}
*/

/*
int sumToTest() {
	int result = sumTo(3); //result = 1 + 2 + 3 = 6
	std::cout << result << std::endl;
	result = sumTo(15); //result should now be 120
	std::cout << result << std::endl;
	return 0;
}

int sumTo(int N) {
	int sum = 0, b = 0;
	for (int i = 0; i < N; ++i) {
		b++;
		sum = sum + b;
	}
	return sum;
}
*/

/*
int factPrint(int a) {
	int sum = fact(a); // thinks this is a variable definition
	std::cout << sum << std::endl;
	return 0;
}

int fact(int a) {
	int sum = 1, c = 0;
	
	for (int i = 0; i < a; ++i){
		
		sum = sum * (a - c);
		c += 1;
	}
	return sum;
}
*/

/* Exponentiation
int expoPrint() {
	int sum = expo(2, 5); // thinks this is a variable definition
	std::cout << sum << std::endl;
	return 0;
}

int expo(int a, int b) {
	int sum = 1;

	for (int i = 0; i < b; ++i) {
		sum *= a;
	}
	return sum;
}
*/