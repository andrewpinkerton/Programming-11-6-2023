// Name: Andrew Pinkerton
// Project Description: Pointers
// Date: Nov 6th, 2023

#include <iostream>

using namespace std;

class Person {
public:
	Person()
	{
		fName = "";
		lName = "";
	}
	void setFirstName(string text)
	{
		fName = text;
	}
	void setLastName(string text)
	{
		lName = text;
	}
	void setGPA(double number)
	{
		gpa = number;
	}
	string getFirstName()
	{
		return fName;
	}
	string getLastName()
	{
		return lName;
	}
	double getGPA()
	{
		return gpa;
	}

	void getData(Person* atu, int number)
	{
		for (int i = 0; i < number; i++)
		{
			string first, last;
			double gpa;

			cout << "Enter First Name: ";
			cin >> first;

			cout << "Enter Last Name: ";
			cin >> last;

			cout << "Enter GPA: ";
			cin >> gpa;

			atu[i].setFirstName(first);
			atu[i].setLastName(last);
			atu[i].setGPA(gpa);


		}
	}
	void avgGPA(Person* atu, int number)
	{
		double total = 0;
		for (int i = 0; i < number; i++)
		{
			total += atu[i].getGPA();

		}

		cout << "Average GPA: " << (total/number) << endl;;
	}

	void output(Person* atu, int number)
	{
		for (int i = 0; i < number; i++)
		{
			cout << endl;
			cout << "Name: " << atu[i].getFirstName() << " " << atu[i].getLastName() << endl;
			cout << "GPA: " << atu[i].getGPA() << endl << endl;
			
		}
	}
private:

	string fName, lName;
	double gpa;
};

int main()
{
	// a pointer is a way of accessing/working with memory locations

	// adding a * to your variable when you create it

	int number;

	cout << "Enter a number: ";
	cin >> number;

	//int numberArray[10]; // must be a constant
	Person* atu = new Person[number];
	// dynamically allocating an array, similiar to vector


	Person temp;

	temp.getData(atu, number);

	temp.output(atu, number);
	
	temp.avgGPA(atu, number);

	//int* ptr = &number; // I am pointing the ptr variable to the address of number
	//// the & is called the address of operator

	//cout << "Number: " << number << endl;
	//cout << "Pointer: " << *ptr << endl;
	//cout << "Address of Number: " << &ptr;

	delete[] atu; // remove the array allocation from memory
}