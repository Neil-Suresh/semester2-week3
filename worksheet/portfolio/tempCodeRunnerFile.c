
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:
 * ID:
 */

 int main( void ) {

    // define and initialise variables for the problem data 

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    // define and initialise variables for the problem data 
   double salary = 36250;
   double NI_rate = 0.08;
   double tax_rate = 0.15;
    // calculate the deductions and final take-home salary
   
      
      double NI_dis = (NI_rate*salary);
      double NI_ded = salary - NI_dis;
      double taxable = NI_ded - 12500;
      double tax_dis = (tax_rate*taxable);
      double tax_ded = NI_ded - tax_dis;

    // Use only these print statement with appropriate formatting and variable names
      printf("Salary: £%.2f \n", salary);
      printf("NI contribution: £%.2f \n", NI_dis);
      printf("Tax contribution: £%.2f \n", tax_dis);
      printf("Take home salary: £%.2f \n", tax_ded);
   
    return 0;
 }