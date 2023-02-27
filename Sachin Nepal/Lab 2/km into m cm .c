#include <stdio.h>
int main ()
{
	float km,m,cm,in;
	printf("Enter The distance in Km\n");
	scanf("%f",&km);
	m=km*1000;
	cm=km*100000;
	in=km*38370.08;
	printf("m=%f and cm=%.2f and in=%.2f",m,cm,in);
}
