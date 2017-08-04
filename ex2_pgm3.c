/*3. Convert watts to luminous flux. 
(ΦV(lm) = P(W) × η(lm/W)
lumens = watts × (lumens per watt)
Example:  What is the luminous flux of a lamp that has power consumption of 60 watts and luminous efficacy of 15 lumens per watt?*/
#include <stdio.h>
void main()
{
	float lumens,w,lpw;
	printf("\n Enter no of watts: ");
	scanf("%f",&w);
    printf("\n Enter no of lumens per watt: ");
	scanf("%f",&lpw);
	lumens= w*lpw;
	printf("\n No of joules are : %f ",lumens);
}