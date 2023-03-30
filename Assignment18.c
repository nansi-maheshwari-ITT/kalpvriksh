#include <stdio.h>

struct employee {
    int id;
    char name[20];
    float salary;
};

void display(struct employee *emp) {
    printf("Employee ID: %d\n", emp->id);
    printf("Employee Name: %s\n", emp->name);
    printf("Employee Salary: %.2f\n", emp->salary);
}

int main() {
    struct employee emp1 = {1, "Nansi", 15000.0};
    struct employee *ptr_emp = &emp1;
    display(ptr_emp);

    return 0;
}
