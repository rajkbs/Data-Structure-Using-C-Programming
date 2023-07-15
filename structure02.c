/* Program : Passing structure to function */

#include<stdio.h>
 struct employee
 {
    char name[30];
    int emp_ID;
    float salary;
 };
 void display(struct employee emp);

 int main(){

    struct employee emp;

    printf("Enter Name : ");
    fgets(emp.name, sizeof(emp.name), stdin);
    
    printf("Enter Employee ID : ");
    scanf("%d", &emp.emp_ID);

    printf("Enter Employee Salary : ");
    scanf("%f", &emp.salary);

    display(emp);
    return 0;
 }
 void display(struct employee emp1){
    printf("Employee Name : %s", emp1.name);
    printf("\nEmployee ID : %d", emp1.emp_ID);
    printf("\nEmployee Salary : %f", emp1.salary);
 }
 