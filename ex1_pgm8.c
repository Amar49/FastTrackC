/*Remove i from ---> printf("Size of char: %d byte\n",sizeofi(d));
place , in --> printf("Size of float: %d bytes\n"sizeof(b));
place ) in -->     printf("Size of double: %d bytes\n",sizeof(c);
d is undeclared in --> printf("Size of char: %d byte\n",sizeof(d));
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    float b;
    double c;
    char D;
    printf("Size of int: %d bytes\n",sizeof(a));
    printf("Size of float: %d bytes\n",sizeof(b));
    printf("Size of double: %d bytes\n",sizeof(c));
    printf("Size of char: %d byte\n",sizeof(D));
    return 0;
}
