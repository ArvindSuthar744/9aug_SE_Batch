#include<stdio.h>
struct employee
{
	int i;
	int No;
	char Name[20];
	char Address[50];
	int Age;

};
main()
{
	
	struct employee emp;
	int i;
	for(i=1;i<=5;i++){
	printf("\nEmpNo: ");
	scanf("%d",&emp.No);
	printf("\nEmpName: ");
	scanf("%s",&emp.Name);
	printf("\nEmpAddress: ");
	scanf("%s",&emp.Address);
	printf("\nEmpAge: ");
	scanf("%d",&emp.Age);

	printf(" empno = %d \n empname = %s \n empaddress = %s \n empage = %d",emp.No,emp.Name,emp.Address,emp.Age);

	}	
}
