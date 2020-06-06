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
		//base-class pointer to base-class object(invoked base-class member function)
		/*
		CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000,.06);
		cout << "Print base-class object:\n\n";
		commissionEmployee.print();//invoked base-class print
		cout << endl << endl;

		CommissionEmployee* commissionEmploeePtr = &commissionEmployee;
		cout << "Print base-class object\n\n";
		commissionEmploeePtr->print();//invoke base-class print
		cout << endl;
		*/

		//derived-class pointer to derived-class object(invoked derive-class member function)
		/*
		BasePlusCommissionEmployee basePlusComissionEmploee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
		cout << "Print derived-class object:\n\n";
		basePlusComissionEmploee.print();//invoked derived-class print
		cout << endl << endl;

		BasePlusCommissionEmployee* basePlusCommissionEmploeePtr = &basePlusComissionEmploee;
		(*basePlusCommissionEmploeePtr).setBaseSalary(1000);
		basePlusCommissionEmploeePtr->print();//invokes derived-class print
		cout << endl;
		*/

		//base-class pointer to derived-class object(invoked base-class member function)
		BasePlusCommissionEmployee basePlusComissionEmploee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);


		CommissionEmployee* CommissionEmployeePtr = &basePlusComissionEmploee;
		cout << "\nCalling print with base-class pointer to "
			<< "derived-class object\ninvokes base-class print "
			<< "function on that derived-class object/n/n";
		CommissionEmployeePtr->print();//invokes base-class print
	}
	catch(invalid_argument& i)
	{
		cout << i.what();
	}
	
} // end main



