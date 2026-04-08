// Problems 46 to 50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
using namespace std;


// Probelm 46 [ Print abs of numbers , dont use abs builtin function ]

// abs is th return the value without negative 


float ReadNumber() {

	float Number;

	cout << "Please Enter a number :\t ";
	cin >> Number;

	cout << endl;

	return Number;
}


float MyAbsFunction(float Number) {

	if (Number < 0) {

		return Number * (-1);
	}
	else {

		return Number;
	}
}


// Problem 47 [  Print round of number , dont use built-in round function ]



float GetFractionPart(float Number) {

	return Number - int(Number);
}

float MyRoundFunction(float Number) {

	int IntPart = (int)Number;

	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= .5) {

		if (Number < 0) {

			 return --IntPart;
		}
		else {
			return ++IntPart;
		}
	}
	
	return IntPart;

}



// Problem 48 [ make floor function ]


int MyFloorfunction(float Number) {

	if (Number >= 0) {

		return int(Number);
	}
	else {

		return int(Number) - 1;

	}
}




// Problem 49 [ make ceil function ] see's which is the bigger number closes to the givin number
// if we have 10.7  the closest big number to it is 11 
// where as in -10.7 the closest big number to it is 10


int MyCeilFunction(float Number) {
	if (abs(GetFractionPart(Number)) > 0) {

		if (Number > 0) {

			return (int)Number + 1;
		}
		else {

			return (int)Number;
		}


	}
	else {

		return Number;
	}
	
}



// Problem 50 [ make square root function ]

float MySqrtFunction(float Number) {

	return pow(Number, 0.5);
}




int main()
{

	// Problem 46 


	float Number = ReadNumber();

	cout << "My abs result : " << MyAbsFunction(Number) << endl;

	cout << "C++ abs result : " << abs(Number) << endl;


	cout << "\n\n\n **************************************************************************************** \n\n\n";


	// Problem 47


	float RoundNumber = ReadNumber();

	cout << "My Round Result is : " << MyRoundFunction(RoundNumber) << endl;

	cout << "C++ Round Function is : " << round(RoundNumber) << endl;


	cout << "\n\n\n **************************************************************************************** \n\n\n";

	

	// Problem 48 



	cout << "My Floor result is : " << MyFloorfunction(RoundNumber) << endl;


	cout << "C++ Floor function is : " << floor(RoundNumber) << endl;



	cout << "\n\n\n **************************************************************************************** \n\n\n";


	// Problem 49 


	cout << "My Ceil result is : " << MyCeilFunction(RoundNumber) << endl;

	cout << "C++ Ceil result is : " << ceil(RoundNumber) << endl;


	cout << "\n\n\n **************************************************************************************** \n\n\n";


	// Problem 50

	cout << "Square root function : ";
	float SqrtNumber = ReadNumber();

	cout << "My sqrt resutl is : " << MySqrtFunction(SqrtNumber) << endl;

	cout << "C++ sqrt result is : " << sqrt(SqrtNumber) << endl;





}

