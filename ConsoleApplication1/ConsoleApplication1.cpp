#include<iostream>
using namespace std;

void PrintHelloWorld();
void Variables();
void Constants();
void UserInput();
void Operators();
void StringTest();

int main()
{
	// Print Hello World
	//PrintHelloWorld();

	// Variables
	//Variables();

	// Constants
	//Constants();

	// Input value
	//UserInput();

	// Operators
	//Operators();

	// Strings
	StringTest();

	return 0;
}

void PrintHelloWorld()
{
	cout << "Hello World from C++" << endl;
}

void Variables()
{
	int i = 10;
	char c = 'a';
	char ascii_char = 65; // We can store ascii value of character
	double d = 1.5;
	string s = "Hello";
	bool flag = true;
	float a = 0.5, b = 3.5, x = 1.0;
	float f = 12e3; // e3 is 10 to the power 3 and the result is multiplied with the left value

	cout << "Value of i = " << i << endl;
	cout << "Value of c = " << c << endl;
	cout << "Value of ascii char " << ascii_char << endl;
	cout << "Value of d = " << d << endl;
	cout << "Value of s = " << s << endl;
	cout << "Value of flag = " << flag << endl;
	cout << "Sum of a + b + x = " << a + b + x << endl;
	cout << "Value of f = " << f << endl;
}

void Constants()
{
	const int my_number = 8888000044;
	//my_number = 900; // This line gives compile time error
}

void UserInput()
{
	string name;
	int num1, num2;
	// Take user input and assign to name variable
	cout << "Please enter your name " << endl;
	cin >> name;
	cout << "Hello " << name << " Welcome to the world of C++" << endl;

	// Take user input for num1 and num2 and assign to variable and add them 
	cout << "num1 : ";
	cin >> num1;
	cout << "num2 : ";
	cin >> num2;
	cout << "num1 + num2 = " << num1 + num2 << endl;
}

void Operators()
{
	// Arithmatic operators
	cout << "---------- ARITHMATIC OPERATOR -----------" << endl;
	int a = 5, b = 10, c;
	c = a + b;
	cout << a << " + " << b << " = " << c << endl;

	// Increment
	cout << "-------- INCREMENTAL OPERATOR -----------" << endl;
	cout << "a = " << a << endl;
	a++;
	cout << "after a++,  a = " << a << endl;
	cout << "perform a++ and check value on same line. a = " << a++ << endl;
	cout << "Next line a  = " << a << endl ;
	cout << "perform ++a and check value on same line. a = " << ++a << endl;
	cout << "Next line a = " << a << endl;

	// Assignment
	cout << "------- ASSIGNMENT OPERATOR -----------" << endl;
	int i = 10;
	cout << "i = 10 assigns 10 on i. Now i = " << i << endl;
	i += 10;
	cout << "i+=10 means i = i+10. So i  = " << i << endl;

	// Comparision
	cout << "--------- COMPARISION OPERATOR -------" << endl;
	cout << "a = " << a << " b = " << b << endl;
	cout << "is a greater than b.  a>b ? " << (a > b ? "True" : "False") << endl;
	cout << "is a equal to be. a==b ? " << (a == b ? "True" : "False") << endl;
	cout << "is a less than b. a<b ? " << (a < b ? "True" : "False") << endl;

	// Logical 
	cout << "----------- LOGICAL OPERATOR --------" << endl;
	bool flag1 = true;
	bool flag2 = false;
	cout << "flag1 && flag2 = " << (flag1 && flag2 ? "True" : "False") << endl;
	cout << "flag1 || flag2 = " << (flag1 || flag2 ? "True" : "False") << endl;
	cout << "!(flag1 || flag2) = " << (!(flag1 || flag2) ? "True" : "False") << endl;
}

void StringTest()
{
	string name = "Vibas";
	cout << "String name  = " << name << endl;
}