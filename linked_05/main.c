//using pointer and loop adding node in ANY POSITION  linked list
#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpID;
    struct Employee_st *pNext;// to hold address
};
int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot, emp4_ot,emp5_ot, *pEmp_ot,*pEmp_head;
    short pos,i;
    emp1_ot.sEmpID = 1;
    emp1_ot.pNext = &emp2_ot;
    emp2_ot.sEmpID = 2;
    emp2_ot.pNext = &emp3_ot;
    emp3_ot.sEmpID = 3;
    emp3_ot.pNext = &emp4_ot;
    emp4_ot.sEmpID = 4;
    emp4_ot.pNext = NULL;


    emp5_ot.sEmpID = 5;

    printf("enter a postion\n");
    scanf("%d",&pos);

    pEmp_head = &emp1_ot;
    pEmp_ot = &emp1_ot;
    if(pos == 0){
        emp5_ot.pNext = pEmp_ot;
        pEmp_head = &emp5_ot;
    }
    else{
        for(i = 1; ((i<pos) && (pEmp_ot->pNext != NULL)); i++){
            pEmp_ot = pEmp_ot->pNext;
        }
        emp5_ot.pNext = pEmp_ot->pNext;
        pEmp_ot->pNext = &emp5_ot;
    }
    for(pEmp_ot = pEmp_head; pEmp_ot != NULL; pEmp_ot=pEmp_ot->pNext)
    {
        printf("pEmp_ot empid =%d, pnext = %x\n", pEmp_ot->sEmpID, pEmp_ot->pNext);

    }


    return 0;
}
