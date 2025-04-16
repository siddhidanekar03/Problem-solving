#include <iostream>
using namespace std;

class Person {
	int age;
	char name[100];

public:
	void set_p()
	{
		cout << "\nEnter the age:";
		cin >>age;
		cout << "\nEnter the Name:";
		cin >> name;
	}

	void display_p()
	{
		cout << endl <<"\nAge: "<< age << "\nName: " << name <<endl;
	}
};

class Employee : public Person {
	int empID;
	int salary;

public:
	void set_s()
	{
		set_p();
		cout << "\nEnter employee ID:";
		cin >> empID;      
		cout << "\nEnter the Salary:";
		cin >>salary;
	}

	void display_s()
	{
		cout <<"\nEmployee ID: "<<empID<< "\nSalary: " <<salary << endl;
	}
};
class Customer : private Person {
	int cusID;

public:
	void set_s()
	{
		set_p();
		cout << "\nEnter customer ID:";
		cin >> cusID;
	}

	void display_s()
	{
		cout <<"\nCustomer ID: "<<cusID<<endl;
	}
};

int main()
{
	Employee e;
	e.set_s();
	Customer c;
	c.set_s();
	c.display_s();

   
	return 0;
}

