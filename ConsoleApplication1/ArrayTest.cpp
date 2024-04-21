#include "ArrayTest.h"

void LearnArray()
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