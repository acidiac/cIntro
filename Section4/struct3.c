/* Structure passing by reference */
#include<stdio.h>

typedef struct {
    int emp_id;
    double salary;
} employee;

void annualRaise (employee* emp);
void printEmp(employee* emp);

int main(void){
    employee noname = {1001, 45000};
    employee* employeePtr;
    employeePtr = &noname;
    // Giving employee a hike 
    annualRaise(employeePtr);
    
    return 0;
}

void annualRaise (employee* emp) {
    emp->salary += emp->salary * 0.1;
    printf("Salary of employee ID: %d hiked by 10%", emp->emp_id);
}

void printEmp(employee* emp){
    printf("Employee Id: %d \n", emp->emp_id); 
    printf("Employee Salary:  %.2f \n", emp->salary);
}

