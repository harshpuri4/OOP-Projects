/* printing hello world
#include <iostream>
using namespace std;

int main() {
	cout << "Hello world";
	return 0;
}
*/
//
/*#include<iostream>

using namespace std;

int main() {
	int a = 4;
	int b = 5;
	cout<<"The value of "<<a<<" is four";
	return 0;



}*/


                                                        //Scope resolution operator
/*#include <iostream>
using namespace std;

int num2 = 60;
int main() {

	int num1 , num2;

	cout << "Enter the value of num1:\n";
	cin >> num1;

	cout << "Enter the value of num2:\n";
	cin >> num2;

	
	cout << "The sum of num1 and 2 is " << num1 + num2 << endl;
	 cout << "The global variable num 2 is " << ::num2;

	 
	 return 0;
}*/


                                                // Reference variables
/*#include <iostream>
using namespace std;

int main() {
	float harsh = 20;
	float & harshu = harsh;

	cout << harsh << endl;
	cout << harshu << endl;



	return 0;
}*/


                                            //Typecasting in c++
/*
#include<iostream>
using namespace std;

int main() {
	
	int a = 45;
	float b = 56.6444446;

	cout << "The value of b is " << (int)b;
	
	
	
	
	return 0;
}*/

                                                          //Manipulator in c++
/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int a = 4, b = 5, c = 1224;

	cout << "The value of a is:  " << setw(1) << a << endl;
	cout << "The value of b is:  " << setw(1) << b << endl;
	cout << "The value of c is:  " << setw(1) << c << endl;



	return 0;
}*/

                                              //iF ELSE AND CONTROL STRUCTURES

/*#include <iostream>
using namespace std;
int main() {
	int i = 6;
	if (i < 3)
	{
		cout << i;
		i++;
	}
	return 0;
}*/

//if else statement

/* ***********************************        if else if laddder           **************************************************************
#include<iostream>
using namespace std;

int main() {

	int age;
	cout << "Tell me your age: " << endl;
	cin >> age;

	if (age > 18) {
		cout << "That's Cool\n" << "You are eligible for the quiz" << endl;
	}
	else if (age <= 18) {
		cout << "You cannot participate in the Quiz" << endl;
	}
	else {
		cout << "You can participate in the quiz" << endl;
	}

	bool virgin;
	cout << "Are you virgin:(Enter 1 for Yes and 0 for No)"<< endl;
		cin >> virgin;

		if (virgin == 1) {
			cout << "That's Great you are on a right path" << endl;
		}
		else if (virgin == 0) {
			cout << "You are a loser and now you have to take our course on how to get a girlfriend" << endl;
		}
}*/
/* 
  *******************************        Switch case statements     ***********************************8
#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Tell me your age" << endl;
	cin >> age;
	switch (age)
	{
	case 18:
		cout << "You are 18";
		break;
	case 19:
		cout << "You are now an adult" << endl;
		break;
	case 21:
		cout << "If you don't have a girlfriend then you are a loser" << endl;
		break;
	default:
		cout << "Your age is useless" << endl;
		break;
	}
    return 0;
}
*/

/* *************************************** Loops in c++ **************************************

//  for loop
#include <iostream>
using namespace std;
int main() {

	for (int i = 0; i <= 0; i++)
	{
		cout<<i<< endl;
	}
	return 0;
}
*/

//while loop
#include <iostream>
using namespace std;

class Foo {
	int M;
public:
	Foo() {
		M = 0;
		Foo(M + 1);
		cout << M << endl;
	}
	Foo(int f) {
		M;
	}

};
int main(){
	return 0;
}