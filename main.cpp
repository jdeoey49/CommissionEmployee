// main.cpp
// Testing class BasePlusCommissionEmployee.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h" // class definition
using namespace std;

int main()
{
   try {
	   // try to instantiate BasePlusCommissionEmployee object
   		BasePlusCommissionEmployee 
      	employee( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );
   
   		// set floating-point output formatting
   		cout << fixed << setprecision( 2 );

		employee.print();
   		employee.setBaseSalary( 1000 ); // set base salary
		employee.setCommissionRate(0.1);

   		cout << "\nUpdated employee information output by print function: \n" 
      		 << endl;
   		employee.print(); // display the new employee information
   
   		// display the employee's earnings
   		cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
   	} // end try
	
	catch (invalid_argument& e ){
		cerr << "\nInvalid argument: " << e.what() << endl;
	} // end catch
} // end main



