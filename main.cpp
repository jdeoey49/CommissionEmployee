// main.cpp
// Testing class BasePlusCommissionEmployee.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h" // class definition
using namespace std;

int main()
{
	try
	{
		//output objects using static binding
		/*
		CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);
		CommissionEmployee* commissionEmployeePtr = nullptr;

		BasePlusCommissionEmployee basePlusCommissionEmploee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
		BasePlusCommissionEmployee* basePlusCommissionEmploeePtr = nullptr;

		cout << fixed << setprecision(2);
		cout << "Invoking print function on base-class and derived-class"
			<< "\nobjects with static binding\n\n";

		commissionEmployee.print();//static binding
		cout << "\n\n";
		basePlusCommissionEmploee.print();//static binding
		*/


		//output objects using dynamic binding
		
		CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);
		CommissionEmployee* commissionEmployeePtr = nullptr;

		BasePlusCommissionEmployee basePlusCommissionEmploee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
		BasePlusCommissionEmployee* basePlusCommissionEmploeePtr = nullptr;

		cout << "Invoking print function on base-class and"
			<< " derived-class \nobjects with dynamic binding";
		commissionEmployeePtr = &commissionEmployee;
		cout << "\n\nCalling virtual function print with base-class pointer"
			<< "\nto base-class object invokes base-class" << " print function:\n\n";
		commissionEmployeePtr->print();

		basePlusCommissionEmploeePtr = &basePlusCommissionEmploee;
		cout << "\n\nCalling virtual function point with derived-class "
			<< "pointer \nto derived-class object invokes derived-class "\
			<< "print function:\n\n";
		basePlusCommissionEmploeePtr->print();

		//aim base-class pointer at a derived-class object and print
		commissionEmployeePtr = &basePlusCommissionEmploee;
		cout << "\n\nCalling virtual functon print with base-class pointer"
			<< "\nto derived-class object invokes derived-class "
			<< "print function:\n\n";
		//polymorphism; invokes BasePlusCommissionEmployee's print;
		//base-class pointer to derived class object
		commissionEmployeePtr->print();
	}
	catch(invalid_argument& i)
	{
		cout << i.what();
	}
	
} // end main



