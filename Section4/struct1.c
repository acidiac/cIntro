/* Basic structures*/
#include<stdio.h>

struct employee {
    int emp_id;
    char emp_name[10];
    double salary;
};
void printEmp(struct employee emp);

int main(void){
    struct employee noname = {1001, "noname", 45000};
    printEmp(noname);
    return 0;
}

void printEmp(struct employee emp){
    printf("Employee Id: %d \n", emp.emp_id); 
    printf("Employee Name:  %s \n", emp.emp_name);
    printf("Employee Salary:  %.2f \n", emp.salary);
}
