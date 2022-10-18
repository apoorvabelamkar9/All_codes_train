#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    char cVar1;
    char cVar2;
    long lVar1;
    short sEmpID1;

    short sEmpID2;


};
int main()
{
    struct Employee_st emp1_ot;
    printf("Size is %d!\n",sizeof(struct Employee_st));
    return 0;
}
