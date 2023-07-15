/* Program : Passing structure reference to function */

#include<stdio.h>
 struct employee
 {
    char name[30];
    int emp_ID;
    float salary;
 };
 void display(struct employee *ptr);

 int main(){
    
    struct employee emp;

    printf("Enter Name : ");
    fgets(emp.name, sizeof(emp.name), stdin);
    
    printf("Enter Employee ID : ");
    scanf("%d", &emp.emp_ID);

    printf("Enter Employee Salary : ");
    scanf("%f", &emp.salary);

    display(&emp);
    return 0;
 }
 void display(struct employee *ptr){

    printf("Employee Name : %s", ptr->name);
    printf("Employee ID : %d", ptr->emp_ID);
    printf("\nEmployee Salary : %f", ptr->salary);
    
 }
