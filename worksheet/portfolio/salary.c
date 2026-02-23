
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Dan Brown
 * ID:201201951509 / vmzr0073
 */

 int main( void ) {
    float salary = 36250.00;
    float NI_percent = 8.0;
    float Tax_percent = 15.0;
    
    float NI_deduction;
    float Tax_deduction;
    float taxable_amount;
    float takeHome;

    // 1. Calculate NI (8% of the total salary)
    NI_deduction = salary * (NI_percent / 100);

    // 2. Calculate Tax (15% of salary above 12,500)
    taxable_amount = salary - 12500;
    Tax_deduction = taxable_amount * (Tax_percent / 100);

    // 3. Final Take Home
    takeHome = salary - NI_deduction - Tax_deduction;

    // Formatting the output as requested
    printf("Salary £%.0f\n", salary);
    printf("NI contribution £%.2f\n", NI_deduction);
    printf("Tax contribution £%.2f\n", Tax_deduction);
    printf("Take home salary £%.2f\n", takeHome);

    return 0;
}