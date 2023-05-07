#include<iostream>
using namespace std;
#include "OOPS.h"

#pragma region ClassObjectBasics
// ============== Class / Objects / Constructor / Access Specifier ===========
class StudentClass
{
	int Age; // Private by default
private:
	int StudentID;
	string StudentName;
	string StudentAddress;

public:
	StudentClass(int studentID, string studentName);
	void SetStudentAddress(string address);

	void SetStudentAge(int age)
	{
		Age = age;
	}

	void PrintStudentInfo()
	{
		cout << "Student ID = " << StudentID << endl;
		cout << "Student Name = " << StudentName << endl;
		cout << "Student Age = " << Age << endl;
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
// ============================================================================
#pragma endregion

#pragma region Inheritance
// ========== Inheritance ======================
class Employee
{
public:
	void SetEmployeeDetails(int id, string name, string address)
	{
		ID = id;
		Name = name;
		Address = address;
	}

	void SetSalary(int salary)
	{
		Salary = salary;
	}

	int GetSalary()
	{
		return Salary;
	}

	void PrintEmployeeDetails()
	{
		cout << "Employee Details " << endl;
		cout << "ID : " << ID << " Name : " << Name << " Address : " << Address << endl;
	}

private:
	int ID;
	string Name;
	string Address;
	int Salary;
};

class PermanentEmployee : public Employee
{
public:
	void SetBonus(int bonus)
	{
		Bonus = bonus;
	}

	int GetSalary()
	{
		int baseSalary = Employee :: GetSalary();
		return baseSalary + Bonus;
	}

private:
	int Bonus;
};

class ContractualEmployee : public Employee
{
public:


private:

};

// =============================================
#pragma endregion

void LearnOOPS()
{
	// Class Object Test
	//ClassObjectTest();
	InheritanceTest();
}

void ClassObjectTest()
{
	StudentClass student1(1, "Vibas"), student2(2, "Pinky");

	/*student1.StudentID = 1;
	student1.StudentName = "Vibas";*/
	student1.SetStudentAddress("Pune");
	student1.SetStudentAge(33);

	/*student2.StudentID = 2;
	student2.StudentName = "Pinky";*/
	student2.SetStudentAddress("Mumbai");
	student2.SetStudentAge(23);

	student1.PrintStudentInfo();
	student2.PrintStudentInfo();
}

void InheritanceTest()
{
	PermanentEmployee permanent_employee;
	ContractualEmployee contractual_employee;

	permanent_employee.SetEmployeeDetails(1, "Vibas", "Pune");
	permanent_employee.SetSalary(10000);
	permanent_employee.SetBonus(500);
	permanent_employee.PrintEmployeeDetails();
	cout << "Total Salary = " << permanent_employee.GetSalary() << endl;

	contractual_employee.SetEmployeeDetails(2, "Pinky", "Mumbai");
	contractual_employee.SetSalary(5000);
	contractual_employee.PrintEmployeeDetails();
	cout << "Total Salary = " << contractual_employee.GetSalary() << endl;
}