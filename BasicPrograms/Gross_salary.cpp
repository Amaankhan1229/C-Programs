#Include<stdio.h>
int main()
{
int salary, HRA, DA, Gross_salary;
Printf("Enter basic salary of an employee:");
Scanf("%d",&salary);
if(salary>=10,000)
{
HRA=20*salary/100;
DA=80*salary/100;
Gross_salary= HRA+DA;
Printf("The gross salary of employee is %d", Gross_salary);
}
else if(salary<=20,000)
{
HRA=25*salary/100;
DA=90*salary/100;
Gross_salary= HRA+DA;
Printf("The gross salary of employee is %d", Gross_salary);
}
else
{
HRA=30*salary/100;
DA=95*salary/100;
Gross_salaryy= HRA+DA;
Printf("The gross salary of employee is %d", Gross_salary);
}
return 0;
}