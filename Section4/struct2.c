/* Basic structures*/
#include<stdio.h>
/*
    Using typedef to declare custom datatype so 
    we don't have to use struct with variable declarations.
*/
typedef struct  {
    int emp_id;
    char emp_name[10];
    double salary;
} employee;

void printEmp( employee emp);

int main(void){
    /* No need to add struct to declaration */
    employee noname = {1001, "noname", 45000}; 
    printEmp(noname);
    return 0;
}

void printEmp(employee emp){
    printf("Employee Id: %d \n", emp.emp_id); 
    printf("Employee Name:  %s \n", emp.emp_name);
    printf("Employee Salary:  %.2f \n", emp.salary);
}
