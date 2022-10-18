#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{

    short sEmpID; // 2 byte
    char cAge;    // 1 byte

};
struct Department_st
{

    struct Employee_st emp1_ot, emp2_ot, emp3_ot;
    long lVar1;

};
union union_ut
{
   struct Employee_st emp1_ot, emp2_ot, emp3_ot;
   long lVar1;

};
int main()
{

    printf("Size is %d!\n",sizeof(struct Employee_st));
    printf("Size is %d!\n",sizeof(struct Department_st));
    printf("Size is %d!\n",sizeof(union union_ut));

    return 0;
}
