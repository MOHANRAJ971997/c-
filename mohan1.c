#include <stdio.h>
 
void main()
{
    int num;
 
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is a positive number \n", num);
    else if (num < 0)
        printf("%d is a negative number \n", num);
    else
        printf("0 is neither positive nor negative");
}
Output 1:

Enter a number:
0
0 is neither positive nor negative
Output 2:

Enter a number:
-3
-3 is a negative number
Output 3:

Enter a number:
100
100 is a positive number
