#include <stdio.h>
#include <string.h>
struct Employee {
    char name[20];
    int id;
};

int main() {

    struct Employee *employees[2];
    struct Employee emp1, emp2;
    strcpy(emp1.name, "Alex");
    emp1.id = 1002;
    employees[0] = &emp1;

    printf("Employee Name: %s\n", employees[0]->name);
    printf("Employee ID: %d\n", employees[0]->id);

    return 0;
}

