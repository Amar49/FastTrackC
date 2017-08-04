/*4. Convert velocity in km/hr to m/s. ( 1kph = 0.2777778 m/s ).  */
#include<stdio.h>
void main()
{
	float kph,ms;
	printf("\n Enter velocity in kmph: ");
	scanf("%f",&kph);
	ms=kph/0.2777778;
	printf("\n velocity in ms: : %f ",ms);
}