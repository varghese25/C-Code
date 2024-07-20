#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // called in main function
number(10); 
number(20);
number(30);
return 0;
}
// parameterized
void number(int num) {   
printf("Number: %d \n", num);
printf("Previous: %d \n", num -1);
printf("Next Number: %d \n", num +1);

}
