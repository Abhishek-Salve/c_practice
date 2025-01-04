#include <stdio.h>

int main()
{
    int num_of_hours_worked = 0;
    float basic_pay = 0;
    float overtime_pay = 0;
    float gross_pay = 0;
    float tax = 0;
    float net_pay = 0;
    float basic_pay_rate = 12.00;
    
    printf("Enter number of hours worked in week:");
    scanf("%d", &num_of_hours_worked);
    printf("You entered: %d\n", num_of_hours_worked);
    
    
    if (num_of_hours_worked > 40)
    {
        basic_pay = 40 * basic_pay_rate;
        overtime_pay = (num_of_hours_worked - 40) * (basic_pay_rate * 1.5);
    } else {
        
        basic_pay = num_of_hours_worked * basic_pay_rate;
    }
    
    gross_pay = basic_pay + overtime_pay;
    printf("Basic pay: %f\n", basic_pay);
    printf("Overtime pay: %f\n", overtime_pay);
    printf("Gross pay: %f\n", gross_pay);
    
    // Calculate taxes
    if (gross_pay <= 300.0)
    {
        printf("Condition 1\n");
        tax += ( (15.0/100.0) * (gross_pay) );
    }
    else if (300 < gross_pay && gross_pay <= 450)
    {
        printf("Condition 2\n");
        tax = (15.0/100.0) * 300;
        tax = tax + (gross_pay - 300) * (20.0/100.0);
    }
    else 
    {
        printf("Condition 3\n");
        tax += 300.0 * 0.15;
        tax += 150.0 * 0.20;
        tax += ((gross_pay - 450) * 0.25);
    }
        
    net_pay = gross_pay - tax;
    printf("Taxes : %f\n", tax);
    printf("Net pay: %f\n", net_pay);
    
	return 0;
}
