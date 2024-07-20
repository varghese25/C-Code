#include <stdio.h>
#include <stdlib.h>

int main () {
int num1 =10;
int num2 =4;
int maximum;
if (num2 > num1)
{
maximum = num2;
} 
else if (num2 == num1)
{
printf("Both are same");
maximum = -1;
}

else {
maximum = num1;
}
printf("%d", maximum);
return 0;
}