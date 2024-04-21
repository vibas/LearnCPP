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