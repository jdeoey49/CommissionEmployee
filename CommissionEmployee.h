// CommissionEmployee.h
// CommissionEmployee class definition.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class

class CommissionEmployee
{
public:
   CommissionEmployee( const std::string&, const std::string&, 
      const std::string&, double = 0.0, double = 0.0 );
   
   void setFirstName( const std::string& ); // set first name
   std::string getFirstName() const; // return first name

   void setLastName( const std::string& ); // set last name
   std::string getLastName() const; // return last name

   void setSocialSecurityNumber( const std::string& ); // set SSN
   std::string getSocialSecurityNumber() const; // return SSN

   void setGrossSales( double ); // set gross sales amount
   double getGrossSales() const; // return gross sales amount

   void setCommissionRate( double ); // set commission rate (percentage)
   double getCommissionRate() const; // return commission rate

   virtual double earnings() const; // calculate earnings
   virtual void print() const; // print CommissionEmployee object
private:
   std::string first_name_;
   std::string last_name_;
   std::string social_security_number_;
   double gross_sales_; // gross weekly sales
   double commission_rate_; // commission percentage
}; // end class CommissionEmployee

#endif

