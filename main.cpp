#include<iostream>
#include<iomanip>
#include<string>
#include"CommissionEmployee.h"
using namespace std;
int main()
{
	//create base-class object
	cout << fixed << setprecision(2);
	CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);
	cout << "Print base-class object:\n\n";
	commissionEmployee.print();
	cout << endl << endl;

	//create base-class pointer and aim it at base-class object
	CommissionEmployee* commissionemployeePtr = &commissionEmployee;
	(*commissionemployeePtr).setGrossSales(1000000);
	commissionemployeePtr->setCommissionRate(0.07);
	commissionemployeePtr->print();//invokes base-class print
	cout << endl;
	return 0;
}