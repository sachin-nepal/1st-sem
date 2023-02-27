#include <stdio.h>
int main ()
{
	int basic,rent,Gsallary;
	printf("Enter the basic sallary\n");
	scanf("%d",&basic);
	rent=0.2*basic;
	Gsallary=basic+rent;
	printf("The gross sallary is\n %d",Gsallary);
	
}
