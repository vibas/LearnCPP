
#include "Basics.h"

int number = 10;

void LearnBasics()
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
	Operators();

	// Strings
	//StringTest();

	// Maths
	//MathTest();

	// Conditions
	//ConditionTest();

	// Loops
	//LoopTest();

	// Arrays
	//ArraysTest();

	// Struct Test
	//StructTest();

	// Reference Test
	//ReferenceTest();

	// Pointer Test
	//PointerTest();

	// Function Test
	//FunctionTest();

	// Exception Handling Test
	//ExceptionHandlingTest();

	// Variadic Function Test
	//TestVariadicFunction_AddNumbers(5,1,2,3,4,5);
	//TestVariadicFunction_AddNumbers_without_count(1, 2, 3, 4, 5,NULL);
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
	cout << "Next line a  = " << a << endl;
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

	// Scope resolution operator ::
	int number = 20;
	cout << "Local Number = " << number << " Global number = " << ::number << endl;
	::number = 100;
	cout << "Local Number = " << number << " Global number = " << ::number << endl;
	// Scope Starts
	{
		int number = 30;
		cout << "Inside Scope Number = " << number << " Global number = " << ::number << endl; // :: takes global variable
	}
	// Scope Ends
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

	cout << "Log 2 " << log(16) << endl;
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
		cout << i + 1 << endl;
	}
	cout << endl;

	int k = 0;
	int max = 10;
	// Nested loop to print Pyramid number
	for (int i = 1; i < max; i++)
	{
		if (i > max / 2)
		{
			k += 2;
		}
		for (int j = 1; j < i - k; j++)
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
	} while (num1 < 5);

	// Continue to print odd numbers up to 20
	// Break the loop if number is more than 10
	for (int i = 0; i < 20; i++)
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
	string daysInWeak[7] = { "Sunday", "Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	// Get array length
	cout << "daysInWeak length = " << sizeof(daysInWeak) / sizeof(string) << endl;

	for (string s : daysInWeak)
	{
		cout << s << endl;
	}

	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };
	// Get array length
	cout << "numbers length = " << sizeof(numbers) / sizeof(int) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << endl;
	}

	// ========= Multidimensional Array ==============//
	int two_dim_num_array[2][3] =
	{
		{
			1,2,3
		},
		{
			4,5,6
		}
	};
	cout << "2 dimensional array = " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << two_dim_num_array[i][j] << " ";
		}
		cout << endl;
	}

	string three_dim_str_array[3][2][5] =
	{
		{
			{
				"A","B","C","D","E"
			},
			{
				"F","G","H","I","j"
			}
		},
		{
			{
				"K","L","M","N","O"
			},
			{
				"P","Q","R","S","T"
			}
		},
		{
			{
				"U","V","W","X","Y"
			},
			{
				"Z","0","1","2","3"
			}
		}
	};

	cout << "Three dimensional array = " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "|";
			for (int k = 0; k < 5; k++)
			{
				cout << three_dim_str_array[i][j][k] << "|";
			}
			cout << "\t";
		}
		cout << endl << "---------------------------" << endl;
	}

	// Battle Ship Game
	// We put "1" to indicate there is a ship.
	bool ships[4][4] =
	{
	  { 0, 1, 1, 0 },
	  { 0, 0, 0, 0 },
	  { 0, 0, 1, 0 },
	  { 0, 0, 1, 0 }
	};

	cout << "Battle Ship Game" << endl;

	PrintShips(ships);

	// Keep track of how many hits the player has and how many turns they have played in these variables
	int hits = 0;
	int numberOfTurns = 0;

	// Allow the player to keep going until they have hit all four ships
	while (hits < 4)
	{
		int row, column;

		cout << "Selecting coordinates\n";

		// Ask the player for a row
		cout << "Choose a row number between 0 and 3: ";
		cin >> row;

		// Ask the player for a column
		cout << "Choose a column number between 0 and 3: ";
		cin >> column;

		// Check if a ship exists in those coordinates
		if (ships[row][column])
		{
			// If the player hit a ship, remove it by setting the value to zero.
			ships[row][column] = 0;

			// Increase the hit counter
			hits++;

			// Tell the player that they have hit a ship and how many ships are left
			cout << "Hit! " << (4 - hits) << " left.\n\n";
		}
		else
		{
			// Tell the player that they missed
			cout << "Miss\n\n";
		}

		// Count how many turns the player has taken
		numberOfTurns++;

		// Display updated ships
		PrintShips(ships);
	}

	cout << "Victory!\n";
	cout << "You won in " << numberOfTurns << " turns";
}

void PrintShips(bool ships[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << ships[i][j] << " ";
		}
		cout << endl;
	}
}

void StructTest()
{
	Student s1, s2;
	s1.studentID = 1;
	s1.studentName = "Rohan";
	s1.gender = "Male";
	s1.address = "Pune";

	s2.studentID = 2;
	s2.studentName = "Neha";
	s2.gender = "Female";
	s2.address = "Mumbai";

	PrintStudent(s1);
	PrintStudent(s2);

	Student* sPointer;
	sPointer = &s1;
	sPointer->studentID = 10;

	sPointer = &s2;
	sPointer->studentID = 20;

	cout << "After change through pointer \n\n";

	PrintStudent(s1);
	PrintStudent(s2);
}

void PrintStudent(Student student)
{
	cout << "---- Student Details ----" << endl;
	cout << "ID : " << student.studentID << endl;
	cout << "NAME : " << student.studentName << endl;
	cout << "GENDER : " << student.gender << endl;
	cout << "ADDRESS : " << student.address << endl;
}

void ReferenceTest()
{
	string food = "Pizza";
	string& meal = food;

	cout << food << "\t" << meal << endl;
	cout << &meal << endl;
}

void PointerTest()
{
	string food = "Pizza";
	cout << "food value = " << food << " food address  = " << &food << endl;

	string* ptr = &food;

	/*Note that the* sign can be confusing here, as it does two different things in our code :

	When used in declaration(string * ptr), it creates a pointer variable.
	When not used in declaration, it act as a dereference operator.*/

	cout << "address : ptr = " << ptr << " Value : *ptr = " << *ptr << endl;

	// Modify pointer
	*ptr = "Hamburger";
	cout << "*ptr changed!" << endl;
	cout << "address : ptr = " << ptr << " Value : *ptr = " << *ptr << endl;
	cout << "food value = " << food << endl;
}

void FunctionTest()
{
	cout << "Enter your name";
	string name = "";
	cin >> name;
	FunctionWithParamTest(name);
	FunctionWithDefaultParam(10, 10);

	int a = 5, b = 10;

	cout << "before swap" << endl;
	cout << "a = " << a << " b = " << b << endl;
	cout << "after swap" << endl;
	SwapNumbers(a, b);
	cout << "a = " << a << " b = " << b << endl;

	int numbers[] = { 1,2,3,4,5,6,7,8 };
	PrintArray(numbers, sizeof(numbers) / sizeof(int));

	int sumIntResult = SumNumbers(5, 6);
	double sumFloatResult = SumNumbers(1.0012, 3.9);

	cout << "sumIntResult = " << sumIntResult << " sumFloatResult = " << sumFloatResult << endl;

	int n = 5;
	int nFactorial = Recursion_Factorial(n);
	if (nFactorial > 0)
	{
		cout << "Factorial of " << n << " = " << nFactorial << endl;
	}

	Recursion_Febanacea(20);
}

void FunctionWithParamTest(string name)
{
	cout << "Printing the parameter name = " << name << endl;
}

void FunctionWithDefaultParam(int a, int b)
{
	cout << "Function with default param a+b = " << a + b << endl;
}

void SwapNumbers(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void PrintArray(int array_elements[], int size)
{
	cout << "Print Array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array_elements[i] << endl;
	}
}

int SumNumbers(int a, int b)
{
	return a + b;
}

double SumNumbers(double a, double b)
{
	return a + b;
}

int Recursion_Factorial(int n)
{
	if (n < 0)
	{
		cout << "You have passed -ve number. Please pass +ve number for factorial!" << endl;
		return 0;
	}

	if (n == 0)
		return 1;

	return n * Recursion_Factorial(n - 1);
}

void Recursion_Febanacea(int max, int a, int b)
{
	int c = a + b;

	if (c < max)
	{
		cout << (a == 0 ? "0 1 " : "") << c << " ";
		Recursion_Febanacea(max, b, c);
	}
}

void ExceptionHandlingTest()
{
	int age = 15;
	try 
	{
		if (age >= 18) 
		{
			cout << "Access granted - you are old enough." << endl;
		}
		else 
		{
			throw (age);
		}
	}
	catch (int myNum) 
	{
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Age is: " << myNum << endl;
	}

	try
	{
		int devider = 0;
		if (devider != 0)
		{
			int result = age / devider;
			cout << age << " / " << devider << " = " << result << endl;
		}
		else
		{
			throw runtime_error("devide by zero exception!");
		}
	}
	catch (runtime_error& e)
	{
		cout << "Exception : " << e.what() << endl;
	}


}
void TestVariadicFunction_AddNumbers(int count, ...)
{
	va_list args;

	va_start(args, count);
	int num = 0;
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		num = va_arg(args, int);
		cout << num << ((i < count - 1) ? " + " : "");
		sum += num;
	}
	cout << " = " << sum << endl;
	va_end(args);
}

void TestVariadicFunction_AddNumbers_without_count(int count, ...)
{
	va_list args;
	va_start(args, count);
	
	int sum = count; // Here count is treated as first number in the argument which is added to sum
	cout << sum << " + ";
	int num = va_arg(args, int); // This line will get first num from args, which is treated as 2nd
	while (num != NULL)
	{
		cout << num << " + ";
		sum += num;
		num = va_arg(args, int);
	}
	cout << " =  " << sum << endl;
	va_end(args);
}
