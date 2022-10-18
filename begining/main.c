//using pointer and loop adding node in the begining linked list
#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpID;
    struct Employee_st *pNext;// to hold address
};
int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot, emp4_ot,emp5_ot, *pEmp_ot;
    emp5_ot.pNext = &emp1_ot;
    emp1_ot.sEmpID = 1;
    emp1_ot.pNext = &emp2_ot;
    emp2_ot.sEmpID = 2;
    emp2_ot.pNext = &emp3_ot;
    emp3_ot.sEmpID = 3;
    emp3_ot.pNext = &emp4_ot;
    emp4_ot.sEmpID = 4;
    emp4_ot.pNext = NULL;

    emp5_ot.sEmpID = 5;

    for(pEmp_ot = &emp5_ot; pEmp_ot != NULL; pEmp_ot = pEmp_ot->pNext)
    {
        printf("pEmp_ot empid =%d, pnext = %p\n", pEmp_ot->sEmpID, pEmp_ot->pNext);
    }
  // printf("pEmp_ot empid =%d, pnext = %p\n", pEmp_ot->sEmpID, pEmp_ot->pNext);


    return 0;
}
