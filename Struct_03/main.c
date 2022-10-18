#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpId;
    char cAge;

};
struct Department_st
{
    short sDeptId;
    struct Employee_st emp1_ot, emp2_ot, emp3_ot;

};

int main()
{
    struct Department_st dept1_ot,dept2_ot, dept3_ot;
    dept1_ot.sDeptId = 420;
    dept1_ot.emp1_ot.sEmpId = 1111;
    dept1_ot.emp1_ot.cAge = 11;
    dept1_ot.emp2_ot.sEmpId = 2222;
    dept1_ot.emp2_ot.cAge = 22;

    dept2_ot.sDeptId = 840;
    dept2_ot.emp1_ot.sEmpId = 4444;
    dept2_ot.emp1_ot.cAge = 44;
    dept2_ot.emp2_ot.sEmpId = 5555;
    dept2_ot.emp2_ot.cAge = 55;


    dept3_ot.sDeptId = 40;
    dept3_ot.emp1_ot.sEmpId = 4444;
    dept3_ot.emp1_ot.cAge = 44;
    dept3_ot.emp2_ot.sEmpId = 5555;
    dept3_ot.emp2_ot.cAge = 55;
    dept3_ot.emp3_ot.sEmpId = 6666;
    dept3_ot.emp3_ot.cAge = 66;


    printf("emp_ot sEmpID: %d! \n", sizeof(struct Employee_st));
    printf("emp_ot sEmpID: %d! \n", sizeof(struct Department_st));

    return 0;
}

