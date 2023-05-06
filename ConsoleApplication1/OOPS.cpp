#include<iostream>
using namespace std;
#include "OOPS.h"

class StudentClass
{
private:
	int StudentID;
	string StudentName;
	string StudentAddress;

public:
	StudentClass(int studentID, string studentName);
	void SetStudentAddress(string address);
	void PrintStudentInfo()
	{
		cout << "Student ID = " << StudentID << endl;
		cout << "Student Name = " << StudentName << endl;
		cout << "Student Address = " << StudentAddress << endl;
	}
};

StudentClass::StudentClass(int studentID, string studentName)
{
	StudentID = studentID;
	StudentName = studentName;
}

void StudentClass::SetStudentAddress(string address)
{
	StudentAddress = address;
}

void LearnOOPS()
{
	// Class Object Test
	ClassObjectTest();
}

void ClassObjectTest()
{
	StudentClass student1(1, "Vibas"), student2(2, "Pinky");

	/*student1.StudentID = 1;
	student1.StudentName = "Vibas";*/
	student1.SetStudentAddress("Pune");

	/*student2.StudentID = 2;
	student2.StudentName = "Pinky";*/
	student2.SetStudentAddress("Mumbai");

	student1.PrintStudentInfo();
	student2.PrintStudentInfo();
}