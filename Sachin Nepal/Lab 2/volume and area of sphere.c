#include <stdio.h>
#include <math.h>
#define PI 3.14
int main ()
{
	float volume,area,radius,pi=3.14;
	printf("Enter the radius");
	scanf("%f",&radius);
	volume= (4*pi*pow(radius,3))/3;
	area= 4*pi*pow(radius,2);
	printf("the volume is %f and the area is %f",volume,area);
	
}
