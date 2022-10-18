//using pointer and loop double linked list
#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpID;
    struct Employee_st *pNext;
    struct Employee_st *pPrev;// to hold address
};
int main()
{
    unsigned char pos;
    struct Employee_st emp1_ot, emp2_ot, emp3_ot, emp4_ot,emp5_ot, *pEmp_ot;

    emp1_ot.sEmpID = 1;
    emp1_ot.pNext = &emp2_ot;
    emp1_ot.pPrev = NULL;
//  emp1_ot.pPrev = &emp4_ot;
    emp2_ot.sEmpID = 2;
    emp2_ot.pNext = &emp3_ot;
    emp2_ot.pPrev = &emp1_ot;

    emp3_ot.sEmpID = 3;
    emp3_ot.pNext = &emp4_ot;
    emp3_ot.pPrev = &emp2_ot;

    emp4_ot.sEmpID = 4;
    emp4_ot.pNext = NULL;
    emp4_ot.pPrev = &emp3_ot;
//  emp4_ot.pNext = &emp1_ot;



    for(pEmp_ot = &emp1_ot; pEmp_ot != NULL; pEmp_ot = pEmp_ot->pNext)
    {
        printf("pEmp_ot empid =%d, pnext = %x Pprev = %x\n", pEmp_ot->sEmpID, pEmp_ot->pNext);
    }
  // printf("pEmp_ot empid =%d, pnext = %p\n", pEmp_ot->sEmpID, pEmp_ot->pNext);


    return 0;
}

