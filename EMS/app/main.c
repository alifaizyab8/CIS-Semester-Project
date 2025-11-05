#include <stdio.h>
#include "../include/login.h"
#include "../include/employee.h"

// RUN COMMAND FOR NOW : gcc main.c employee.c login.c && ./a.exe
int main()
{
    // Display Login Screen
    //displayLoginScreen();
    // Employee array
    struct Employee employees[MAX_EMPLOYEES];
    
    /*
    My load employee function returns the number of employees loaded and loads
    data from employee.txt into the employees array
    */
    int employeeCount = loadEmployee(employees, MAX_EMPLOYEES);
    // Initialize employee records at the start of the program
    

    // Testing Add Employee Function
    addEmployee(employees, &employeeCount);
    displaySingleEmployee(employees, MAX_EMPLOYEES, employees[0].id);
    removeEmployee(employees, &employeeCount, employees[0].id);
    displaySingleEmployee(employees, MAX_EMPLOYEES, employees[0].id);


 void showMenu();
    return 0;
}