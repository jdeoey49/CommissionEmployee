// main.cpp
// Testing class BasePlusCommissionEmployee.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h" // class definition
using namespace std;

int main()
{
	BasePlusCommissionEmployee basePlusComissionEmploee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

	BasePlusCommissionEmployee* basePlusCommissionEmploeePtr = &basePlusComissionEmploee;

	cout << "Print derived-class object:\n\n";
	basePlusComissionEmploee.print();//invoked derived-class print
	cout << endl << endl;
	(*basePlusCommissionEmploeePtr).setBaseSalary(1000);
	basePlusCommissionEmploeePtr->print();//invokes derived-class print
	cout << endl;
} // end main



