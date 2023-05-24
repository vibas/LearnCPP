#pragma once
#include<iostream>
#include<cmath>
using namespace std;
#include<stdarg.h>

void LearnBasics();

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
void PrintShips(bool ships[4][4]);

void StructTest();
struct Student
{
	int studentID;
	string studentName;
	string gender;
	string address;
};
void PrintStudent(Student student);

void ReferenceTest();
void PointerTest();
void FunctionTest();
void FunctionWithParamTest(string name);
void FunctionWithDefaultParam(int a = 5, int b = 5);
void SwapNumbers(int& a, int& b);
void PrintArray(int array_elements[], int size);
int SumNumbers(int a, int b);
double SumNumbers(double a, double b);
int Recursion_Factorial(int n);
void Recursion_Febanacea(int max, int a = 0, int b = 1);
void ExceptionHandlingTest();
void TestVariadicFunction_AddNumbers(int count,...);
void TestVariadicFunction_AddNumbers_without_count(int count,...);
