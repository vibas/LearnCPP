#include "FileSystem.h"

void LearnFileSystem()
{
	CreateAndWriteFile();
	ReadFile();
}

void CreateAndWriteFile()
{
	// Create fstream object with file name - Open file 
	ofstream myFile("Test.txt");

	// Write to file using << operator
	myFile << "Hello World! \nThis is a message inside the text file";

	// Close File
	myFile.close();
}

void ReadFile()
{
	// Create a text string, which is used to output the text file
	string myText;

	// Read from the text file
	ifstream MyReadFile("Test.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline(MyReadFile, myText))
	{
		// Output the text from the file
		cout << myText << endl;
	}

	// Close the file
	MyReadFile.close();
}