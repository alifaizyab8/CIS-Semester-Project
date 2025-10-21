#include <stdio.h>
#include "../include/login.h"
#include "../include/employee.h"



int main()
{
    // Employee array
    struct Employee employees[MAX_EMPLOYEES];
    // Where ever *count is used, it is to keep track of the number of employees currently in the system
    // we pass employeeCount with & to send its address
    int employeeCount = 0;
    
    
    
    displayLoginScreen();
    return 0;
}