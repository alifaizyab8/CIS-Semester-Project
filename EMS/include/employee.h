#ifndef employee_h
#define employee_h

struct employee_name
{
    char firstname[20];
    char lastname[20];
};

struct employees
{
    int id;
    struct employee_name emp;
    int age;
    char position[25];
    float salary;
    float hourly_rate;
    int working_hours;
    int over_time;
    float last_payment;
    float performance_rating;


};

#endif