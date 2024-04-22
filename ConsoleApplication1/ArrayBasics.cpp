#include "ArrayBasics.h"

void StringArray()
{
	string daysInWeak[7] = { "Sunday", "Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	// Get array length
	cout << "daysInWeak length = " << sizeof(daysInWeak) / sizeof(string) << endl;

	for (string s : daysInWeak)
	{
		cout << s << endl;
	}
}

void IntegerArray()
{
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };
	int numbersArrayLength = sizeof(numbers) / sizeof(int);
	// Get array length
	cout << "numbers length = " << numbersArrayLength << endl;
	for (int i = 0; i < numbersArrayLength; i++)
	{
		cout << numbers[i] << endl;
	}
}

void TwoDimensionalArray()
{
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
}

void ThreeDimensionalArray()
{
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
}

void LinearSearchFromArray()
{
	int numbers[] = { 1,2,20,45,5,6,27,78,99,101 };
	int numbersArrayLength = sizeof(numbers) / sizeof(int);
	for (int n : numbers)
	{
		cout << n << " ";
	}

	int numberToSearch;
	cout << "\n Enter Number to search from array "; 
	cin >> numberToSearch;
	cout << endl;
	bool numberFoundinArray = false;
	for (int i = 0; i < numbersArrayLength; i++)
	{
		if (numbers[i] == numberToSearch)
		{
			cout << numberToSearch << " Found at index " << i << endl;
			numberFoundinArray = true;
			break;
		}
	}
	if(!numberFoundinArray)
		cout << numberToSearch << " was not found in the Array";
}

void BinarySearchFromArray()
{
	int numbers[] = { 1,2,5,6,20,27,45,78,99,101 };	// Must be a sorted array

	int numbersArrayLength = sizeof(numbers) / sizeof(int);
	for (int n : numbers)
	{
		cout << n << " ";
	}

	int numberToSearch;
	cout << "\n Enter Number to search from array ";
	cin >> numberToSearch;
	cout << endl;
	
	int min = 0, max = numbersArrayLength - 1;
	int mid = 0;
	bool numberFoundinArray = false;
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (numbers[mid] == numberToSearch)
		{
			cout << numberToSearch << " found at index " << mid;
			numberFoundinArray = true;
			break;
		}
		else if (numberToSearch > numbers[mid])
		{
			min = mid + 1;
		}
		else
		{
			max = mid - 1;
		}
	}
	if (!numberFoundinArray)
		cout << numberToSearch << " was not found in the Array";
	
}