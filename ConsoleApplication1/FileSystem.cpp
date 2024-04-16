#include "FileSystem.h"
#include<iostream>

void LearnFileSystem()
{
	CreateAndWriteFile();
	ReadFile();
}

void CreateAndWriteFile()
{
	ifstream localFile("Test.txt");
	if (localFile.is_open()) {
		cout << "File exists!!" << endl;
		return;
	}

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
	ifstream myFile("Test.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline(myFile, myText))
	{
		// Output the text from the file
		cout << myText << endl;
	}

	// Close the file
	myFile.close();
}