#include<iostream>
using namespace std;
#include "OOPS.h"

#pragma region ClassObjectBasics
// ============== Class / Objects / Constructor / Access Specifier ===========
class StudentClass
{
	int Age; // Private by default
	static string schoolName;
	static string schoolAddress;

private:
	int StudentID;
	string StudentName;
	string StudentAddress;

public:
	StudentClass(int studentID, string studentName);
	~StudentClass();
	void SetStudentAddress(string address);
	static void PrintSchoolInfo()
	{
		cout << "School Name = " << schoolName << " Address : " << schoolAddress << endl;
	}

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

string StudentClass::schoolName = "S R Highschool";
string StudentClass::schoolAddress = "Odisha";

StudentClass::StudentClass(int studentID, string studentName)
{
	cout << "New Student Object Created!" << endl;
	StudentID = studentID;
	StudentName = studentName;
}

void StudentClass::SetStudentAddress(string address)
{
	StudentAddress = address;
}

StudentClass :: ~StudentClass()
{
	cout << "Student Object Destroyed!" << endl;
}
// ============================================================================

class SmartPointer
{
	StudentClass* student;
public:
	explicit SmartPointer(StudentClass* s = NULL)
	{
		student = s;
	}
	
	~SmartPointer()
	{
		delete(student);
	}

	// Overloading dereferencing operator
	StudentClass& operator*() { return *student; }
};
#pragma endregion

#pragma region Inheritance
// ========== Inheritance ======================
class Owner
{
public:
	void SetCompanyShare(int share)
	{
		companyShare = share;
	}

	int GetTotalShare()
	{
		return companyShare;
	}

private:
	int companyShare;
};

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

	void PrintEmployeeDetails()
	{
		cout << "Employee Details " << endl;
		cout << "ID : " << ID << " Name : " << Name << " Address : " << Address << endl;
		if(EmployeeType!="")
			cout << "Employee Type : " << EmployeeType << endl;
		if(Designation != "")
		cout << "Employee Designation : " << Designation << endl;
	}

private:
	int ID;
	string Name;
	string Address;

protected:
	int Salary;
	string EmployeeType;
	string Designation;
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
		return Salary + Bonus;
	}

	void SetEmployeeType(string type)
	{
		EmployeeType = type;
	}

private:
	int Bonus;

protected:
	void SetDesignation(string designation)
	{
		Designation = designation;
	}
};

class CEO : public PermanentEmployee, public Owner
{
public:
	void SetDesignation(string designation)
	{
		PermanentEmployee::SetDesignation(designation);
	}

private:

};



class ContractualEmployee : public Employee
{
public:
	int GetSalary()
	{
		return Salary;
	}

	void SetEmployeeType(string type)
	{
		EmployeeType = type;
	}

private:

protected:
	void SetDesignation(string designation)
	{
		Designation = designation;
	}

};

class PermanentManager : public PermanentEmployee
{
public:
	void SetDesignation(string designation)
	{
		PermanentEmployee::SetDesignation(designation);
	}

private:

};

class ContractualManager : public ContractualEmployee
{
public:
	void SetDesignation(string designation)
	{
		ContractualEmployee::SetDesignation(designation);
	}

private:

};



// =============================================
#pragma endregion

#pragma region Polymorphism
class Animal
{
public:
	void CreateSound()
	{
		cout << "Animal Sound : NONE" << endl;
	}

private:

};

class Dog :public Animal
{
public:
	void CreateSound()
	{
		cout << "Dog Sound : Bow Bow" << endl;
	}

private:

};

class Cat :public Animal
{
public:
	void CreateSound()
	{
		cout << "Cat Sound : Meaw Meaw" << endl;
	}

private:

};


#pragma endregion


void LearnOOPS()
{
	// Class Object Test
	ClassObjectTest();
	//InheritanceTest();
	//PolymorphismTest();
}

void ClassObjectTest()
{
	// Create new objects of StudentClass
	//StudentClass student1(1, "Vibas"), student2(2, "Pinky");
	
	// Set properties using methods
	//student1.SetStudentAddress("Pune");
	//student1.SetStudentAge(33);
	//student2.SetStudentAddress("Mumbai");
	//student2.SetStudentAge(23);

	// Call static method of StudentClass
	//StudentClass::PrintSchoolInfo();
	
	// Call public methods of student objects
	//student1.PrintStudentInfo();
	//student2.PrintStudentInfo();

	// ----------- USE OF POINTERS TO CLASS ----------- //
	//Create a pointer to StudentClass
	/*StudentClass* studentPointer;
	* 
	//Assign address of studen objects to this pointer
	studentPointer = &student1;
	//Call public methods via pointer
	studentPointer->SetStudentAge(34);
	studentPointer = &student2;
	studentPointer->SetStudentAge(24);

	cout << "After changing student data with pointer \n \n";

	StudentClass::PrintSchoolInfo();
	student1.PrintStudentInfo();
	student2.PrintStudentInfo();*/

	// ----------- NEW OBJECT PINTER -----------------//
	//cout << "Create a new student object with pointer \n \n";
	//
	//// Create a new object of Student Class using pointer and new keyword
	//StudentClass *studentPointer1 = new StudentClass(3, "Pointer Student");
	//
	//// Call public methods using pointer
	//studentPointer1->SetStudentAge(25);
	//studentPointer1->SetStudentAddress("Hyderabad");
	//
	//StudentClass::PrintSchoolInfo();
	//studentPointer1->PrintStudentInfo();

	//// Call to deconstructor for handling memory leak
	//studentPointer1->~StudentClass();
	// -------------------------------------------------//

	// ------------- Memory Leak -----------------------//
	while (1)
	{
		//StudentClass StudentObj = StudentClass(1, "Test"); // This takes 600 KB memory
		//StudentClass* StudenPointerObj = new StudentClass(1, "Test"); // This keeps increasing memory consumption
		// Smart Pointer
		SmartPointer ptr(new StudentClass(1, "Test"));
	}
	
	// -------------------------------------------------//
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

	// ========== MULTILEVEL INHERITANCE ===========//
	PermanentManager permanent_manager;
	ContractualManager contractual_manager;

	permanent_manager.SetEmployeeDetails(3, "Lucky", "Bangalore");
	permanent_manager.SetEmployeeType("Permanent");
	permanent_manager.SetDesignation("Manager");
	permanent_manager.SetSalary(50000);
	permanent_manager.SetBonus(5000);
	permanent_manager.PrintEmployeeDetails();
	cout << "Total Salary = " << permanent_manager.GetSalary() << endl;

	contractual_manager.SetEmployeeDetails(4, "Dipti", "Chennai");
	contractual_manager.SetEmployeeType("Contractual");
	contractual_manager.SetDesignation("Manager");
	contractual_manager.SetSalary(30000);
	contractual_manager.PrintEmployeeDetails();
	cout << "Total Salary = " << contractual_manager.GetSalary() << endl;
	
	// ============= MULTIPLE INHERITANCE ===============
	CEO ceo;
	ceo.SetEmployeeDetails(1000, "Mr. V R BEHERA", "Balasore");
	ceo.SetCompanyShare(50);
	ceo.SetSalary(100000);
	ceo.SetBonus(10000);
	ceo.SetEmployeeType("Permanent");
	ceo.SetDesignation("CEO");
	ceo.PrintEmployeeDetails();
	cout << "Total Salary = " << ceo.GetSalary() << endl;
	cout << "Total Share = " << ceo.GetTotalShare() <<"%" << endl;
}

void PolymorphismTest()
{
	Animal animal;
	Dog dog;
	Cat cat;

	animal.CreateSound();
	dog.CreateSound();
	cat.CreateSound();
}