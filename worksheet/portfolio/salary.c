#include <stdio.h>

/*
 * Portfolio submission
 * Name: Dan Brown
 * ID: 201201951509 / vmzr0073
 */

int main( void ) {
    float salary = 36250.00;
    float NI_percent = 8.0;
    float Tax_percent = 15.0;
    
    float NI_deduction;
    float Tax_deduction;
    float taxable_amount;
    float takeHome;

    NI_deduction = salary * (NI_percent / 100.0);

    taxable_amount = (salary - NI_deduction) - 12500.0;
    Tax_deduction = taxable_amount * (Tax_percent / 100.0);

    takeHome = salary - NI_deduction - Tax_deduction;

    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NI_deduction);
    printf("Tax contribution £%.2f\n", Tax_deduction);
    printf("Take home salary £%.2f\n", takeHome);

    return 0;
}