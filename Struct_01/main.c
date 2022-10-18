#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpId;
    char acEmpName[10];
    char cAge;

};
int main()
{
    struct Employee_st emp1_ot,emp2_ot;

    emp1_ot.sEmpId = 1234;
    emp1_ot.cAge=18;
    emp2_ot.sEmpId = 5678;
    emp2_ot.cAge=20;

    printf("emp_ot1 sEmpID: %d! Age: %d\n", emp1_ot.sEmpId, emp1_ot.cAge);
    printf("emp_ot2 sEmpID: %d! Age: %d\n", emp2_ot.sEmpId, emp2_ot.cAge);

    return 0;
}
