//circular linked list
#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpID;
    struct Employee_st *pNext;// to hold address
};
int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot;
    emp1_ot.sEmpID = 1;
    emp1_ot.pNext = &emp2_ot;
    emp2_ot.sEmpID = 2;
    emp2_ot.pNext = &emp3_ot;
    emp3_ot.sEmpID = 3;
    emp3_ot.pNext = &emp1_ot;
    printf("emp1 addr=%p: empid=%d! pNext = %p\n", &emp1_ot,emp1_ot.sEmpID, emp1_ot.pNext);
    printf("emp2 addr=%p: empid=%d! pNext = %p\n", &emp2_ot,emp2_ot.sEmpID, emp2_ot.pNext);
    printf("emp3 addr=%p: empid=%d! pNext = %p\n", &emp3_ot,emp3_ot.sEmpID, emp3_ot.pNext);
    return 0;
}
