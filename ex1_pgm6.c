/*PI is not defined in --> area = PI * rad * rad;
%f is not in -->printf("\nArea of circle : f ", area);
%d is not in -->scanf("d", &rad);
*/

#include<stdio.h>
 
int main() {
 
   int rad;
   float PI = 3.14, area, ci;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);
 
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);
 
   return (0);
}
