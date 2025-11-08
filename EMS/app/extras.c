#include "../include/extras.h"
#include "../include/employee.h"
#include <stdio.h>


void showMenu(struct Employee employees[], int *employeeCount) {
    int choice;

    while (1) {
        printf("\n====== MENU ======\n");
        printf("1. DISPLAY ALL EMPLOYEES\n");
        printf("2. DISPLAY SINGLE EMPLOYEE\n");
        printf("3. ADD EMPLOYEE\n");
        printf("4. REMOVE EMPLOYEE\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR DESIRED OPTION: ");
        scanf("%d", &choice);  
        switch (choice) {
            case 1: 
            printf("DISPLAY ALL EMPLOYEES\n");
            displayAllEmployees(employees, *employeeCount);
            break;
            case 2:
                printf("DISPLAYING SINGLE EMPLOYEE:\n");
                displaySingleEmployee(employees, *employeeCount, employees[0].id);
                break;
            case 3:
                printf("ADDING NEW EMPLOYEE:\n");
                addEmployee(employees, employeeCount);
                break;
            case 4:
                printf("REMOVING EMPLOYEE:\n");
                removeEmployee(employees, employeeCount, employees[0].id);
                break;
            case 5:
                printf("EXITING PROGRAM\n");
                return;
            default:
                printf("INVALID SELECTION!\n");
        }
    }
}
void displayAllEmployees(const struct Employee employees[], int employeeCount)
{
    if (employeeCount == 0)
    {
        printf("\033[1;31mNo employees found to display.\033[0m\n");
        return;
    }

    line();
    printf("\n\033[1;34mAll Employees List\033[0m\n");

    printf("\033[1;33m%-5s %-15s %-15s %-5s %-15s %-10s %-12s %-10s %-10s\033[0m\n",
           "ID", "First Name", "Last Name", "Age", "Position", "Salary", "Working Hrs", "Overtime", "Rating");
    line();

    for (int i = 0; i < employeeCount; i++)
    {
        printf("%-5d %-15s %-15s %-5d %-15s %-10.2f %-12d %-10d %-10.2f\n",
               employees[i].id,
               employees[i].emp.firstname,
               employees[i].emp.lastname,
               employees[i].age,
               employees[i].position,
               employees[i].salary,
               employees[i].working_hours,
               employees[i].over_time,
               employees[i].performance_rating);
    }

    line();
}
