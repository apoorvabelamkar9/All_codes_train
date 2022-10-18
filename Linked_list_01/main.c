#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpID;
};
int main()
{
    struct Employee_st emp1_ot, emp2_ot, *pEmp_st;
    emp1_ot.sEmpID = 1;
    emp2_ot.sEmpID = 2;
    pEmp_st = &emp1_ot;
    printf("emp1 addr=%p: %d!\n", &emp1_ot,emp1_ot.sEmpID);
    printf("emp2 addr=%p: %d!\n", &emp2_ot, emp2_ot.sEmpID);

    printf("pEmp_st =%p: 1st time %d!\n",pEmp_st, pEmp_st->sEmpID);
    pEmp_st = &emp2_ot;
    printf("pEmp_st =%p: 2nd time %d!\n",pEmp_st, pEmp_st->sEmpID);
    return 0;
}
