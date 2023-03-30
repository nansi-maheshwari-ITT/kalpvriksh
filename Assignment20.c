#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct employee emp1 = {1, "Nansi", 15000.0};
    struct employee emp2 = {2, "Vanshu", 16000.0};
    struct employee *ptr_emp1 = &emp1;
    struct employee *ptr_emp2 = &emp2;
    struct employee *ptr_arr[2] = {ptr_emp1, ptr_emp2};

    for (int i = 0; i < 2; i++) {
        printf("Employee %d\n", i+1);
        printf("ID: %d\n", ptr_arr[i]->id);
        printf("Name: %s\n", ptr_arr[i]->name);
        printf("Salary: %.2f\n", ptr_arr[i]->salary);
    }
}
