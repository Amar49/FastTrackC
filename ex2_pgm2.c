/*2. Convert joules to kilowatt hour. ( 1kW = J / (1000 * S)  where S is in seconds ) 
Example: What is the power consumption of an electric circuit that has energy consumption of 90J for time duration of 3 seconds?*/
#include <stdio.h>
void main()
{
	float j,s,kw;
	printf("\n Enter no of joules: ");
	scanf("%f",&j);
    printf("\n Enter no of seconds: ");
	scanf("%f",&s);
	kw= (j/(1000*s));
	printf("\n No of joules are : %f ",kw);
}