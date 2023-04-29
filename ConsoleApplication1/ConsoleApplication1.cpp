#include<iostream>
#include<cmath>
using namespace std;

void PrintHelloWorld();
void Variables();
void Constants();
void UserInput();
void Operators();
void StringTest();
void MathTest();
void ArraysTest();
void ConditionTest();
void LoopTest();

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
	//StringTest();

	// Maths
	//MathTest();

	// Conditions
	//ConditionTest();

	// Loops
	LoopTest();

	// Arrays
	//ArraysTest();

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
	string firstName = "Vibas";
	string lastName = "Behera";

	cout << "First name  = " << firstName << " Last Name = " << lastName << endl;

	// Concatenation
	string fullName = firstName + " " + lastName;
	cout << "Concatenation : Full Name " << fullName << endl;

	// Append
	cout << "Append : " << firstName.append(lastName) << endl;
	cout << "Value of first name after appending last name " << firstName << endl;

	// String Length
	cout << "Length of full name = " << fullName.length() << endl;
	// String Size same as length
	cout << "Size of full name = " << fullName.size() << endl;

	// Index of string 
	cout << "First character of full name = " << fullName[0] << endl;
	cout << "Change first character to  : ";
	char firstChar;
	cin >> firstChar;
	fullName[0] = firstChar;
	cout << "After changing the first character, full name becomes = " << fullName << endl;

	// Special Characters \t \n \" etc
	string sentence = "Hello, my name is \"Vibas\"\t Thanks. \n";
	cout << sentence;

	// User input string 
	string f_name, l_name;
	cout << "Enter First Name : ";
	cin >> f_name;
	cout << "Enter Second Name : ";
	cin >> l_name;
	fullName = f_name + " " + l_name;
	cout << "Full Name : " << fullName << endl;
}

void MathTest()
{
	// Max
	cout << "Max between 5 & 10 : " << max(5, 10) << endl;
	cout << "Min between 5 & 10 : " << min(5, 10) << endl;
	
	// SQRT  
	cout << "Sqrt of 64 : " << sqrt(64) << endl;
	cout << "Round 2.6 = " << round(2.6) << endl;
	cout << "Ceil 2.6 = " << ceil(2.6) << endl;
	cout << "floor 2.6 = " << floor(2.6) << endl;

	cout << "Log 2 " << log(16) <<endl ;
}

void ConditionTest() 
{
	// Boolean
	int a = 5, b = 10;
	bool is_a_greaterThan_b = a > b;
	bool is_a_lessThan_b = a < b;
	bool is_a_equalTo_b = a == b;
	cout << "a = " << a << " b = " << b << " a>b = " << (is_a_greaterThan_b ? "TRUE" : "FALSE") << endl;
	cout << "a = " << a << " b = " << b << " a<b = " << (is_a_lessThan_b ? "TRUE" : "FALSE") << endl;
	cout << "a = " << a << " b = " << b << " a==b = " << (is_a_equalTo_b ? "TRUE" : "FALSE") << endl;

	// if statement
	if (a > b)
	{
		cout << a << " is greater than " << b << endl;
	}
	else if (a < b)
	{
		cout << a << " is less than " << b << endl;
	}
	else
	{
		cout << a << " is equal to " << b << endl;
	}

	// Switch statement
	int day = 5;
	string day_str = "";
	switch (day)
	{
	case 1:
		day_str = "Monday";
		break;
	case 2:
		day_str = "Tuesday";
		break;
	case 3:
		day_str = "Wednesday";
		break;
	case 4:
		day_str = "Thursday";
		break;
	case 5:
		day_str = "Friday";
		break;
	case 6:
		day_str = "Saturday";
		break;
	case 7:
		day_str = "Sunday";
		break;
	default:
		day_str = "Good Day";
		break;
	}

	cout << "Day is " << day_str << endl;
}

void LoopTest()
{
	// Simple loop
	for (int i = 0; i < 10; i++)
	{
		cout << i+1 << endl;
	}
	cout << endl;

	int k = 0;
	int max = 10;
	// Nested loop to print Pyramid number
	for (int i = 1; i < max; i++)
	{	
		if (i > max/2)
		{
			k+=2;
		}
		for (int j = 1; j < i-k; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	// While loop
	int num = 0;
	while (num < 5)
	{
		cout << "HELLO" << endl;
		num++;
	}

	// do-while loop
	int num1 = 0;
	do
	{
		cout << "HI" << endl;
		num1++;
	} while (num1<5);

	// Continue to print odd numbers up to 20
	// Break the loop if number is more than 10
	for (int  i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		if (i > 10)
		{
			break;
		}
		cout << i << endl;
	}
}

void ArraysTest()
{
	string daysInWeak[7] = { "Sunday", "Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	for (int i = 0; i < 7; i++)
	{
		cout << daysInWeak[i] << endl;
	}

	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << endl;
	}
}