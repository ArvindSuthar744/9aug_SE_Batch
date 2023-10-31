#include<stdio.h>
struct employee
{
	int No;
	char Name[20];
	char Address[50];
	int Age;
	
};
main()
{
	struct employee emp;
	printf("EmpNo: ");
	scanf("%d",&emp.No);
	printf("EmpName: ");
	scanf("%s",&emp.Name);
	printf("EmpAddress: ");
	scanf("%s",&emp.Address);
	printf("EmpAge: ");
	scanf("%d",&emp.Age);
	
	printf(" empno = %d \n empname = %s \n empaddress = %s \n empage = %d",emp.No,emp.Name,emp.Address,emp.Age);
	
}
