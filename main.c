#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char emp_name[200];
    char emp_number[20];
    char KRA_pin[5];

    int hours_worked = 0;
    int overtime_hours = 0;
    int rate_per_hour = 25.00;
    int overtime_rate = 1500.00;

    float tax = 0.3;
    float solve_salary = 0.00;
    float overtime_pay = 1500.00;
    float normal_pay = 0.00;
    float tax_paid = 0.00;
    float net_income = 0.00;
  // inputs
    printf("\n\n");
    printf("\t Give Employees Name :  ");
    gets(emp_name);

    printf("\t Employees number : ");
    gets(emp_number);

    printf("\t KRA pin :  ");
    gets(KRA_pin);

    printf("\t Number of normal hours worked :  ");
    scanf("%d", & hours_worked);

    printf("\t Number of overtime hours worked : ");
    scanf("%d", & overtime_hours);

  //computations

        normal_pay = (hours_worked * rate_per_hour);

        solve_salary = (normal_pay + overtime_pay);

        tax_paid = (tax * solve_salary);

        net_income = (solve_salary - tax_paid);



//outputs

    printf("\n\n");
    printf("Employees Name: %s\n\n", emp_name);
    printf("Employees Number: %s\n\n", emp_number);
    printf("normal pay: Ksh.%2.2f\n\n", normal_pay);
    printf("overtime pay: Ksh. %2.2f\n\n", overtime_pay);
    printf("total salary: Ksh.%2.2f\n\n", solve_salary);
    printf("tax paid: Ksh.%2.2f\n\n", tax_paid);
    printf("net income: Ksh.%2.2f\n\n", net_income);
    printf("\n\n");
    system("pause");
    printf("\n\n");


    return 0;
}
