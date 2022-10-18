//using pointer and loop forward linked list
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
    emp1_ot.sEmpID = 1;
    emp1_ot.pNext = &emp2_ot;
    emp2_ot.sEmpID = 2;
    emp2_ot.pNext = &emp3_ot;
    emp3_ot.sEmpID = 3;
    emp3_ot.pNext = &emp4_ot;
    emp4_ot.sEmpID = 4;
    emp4_ot.pNext = &emp5_ot;
    emp5_ot.sEmpID = 5;
    emp5_ot.pNext = NULL;
    printf("emp1 addr=%p: empid=%d! pNext = %p\n", &emp1_ot,emp1_ot.sEmpID, emp1_ot.pNext);
    printf("emp2 addr=%p: empid=%d! pNext = %p\n", &emp2_ot,emp2_ot.sEmpID, emp2_ot.pNext);
    printf("emp3 addr=%p: empid=%d! pNext = %p\n", &emp3_ot,emp3_ot.sEmpID, emp3_ot.pNext);
    printf("emp4 addr=%p: empid=%d! pNext = %p\n", &emp4_ot,emp4_ot.sEmpID, emp4_ot.pNext);
    printf("emp5 addr=%p: empid=%d! pNext = %p\n", &emp5_ot,emp5_ot.sEmpID, emp5_ot.pNext);

    for(pEmp_ot = &emp1_ot; pEmp_ot != NULL; pEmp_ot = pEmp_ot->pNext)
    {
        printf("pEmp_ot empid =%d, pnext = %p\n", pEmp_ot->sEmpID, pEmp_ot->pNext);
    }
  // printf("pEmp_ot empid =%d, pnext = %p\n", pEmp_ot->sEmpID, pEmp_ot->pNext);


    return 0;
}
