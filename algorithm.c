//Basic Algorithm C program to add three numbers
// with the help of above designed algorithm

#include <stdio.h>

int main()
{

    // Variables to take the input of the 3 numbers
    int num1, num2, num3;

    // Variable to store the resultant sum
    int sum;

    // Take the 3 numbers as input
    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("%d\n", num1);

    printf("Enter the 2nd number: ");
    scanf("%d", &num2);
    printf("%d\n", num2);

    printf("Enter the 3rd number: ");
    scanf("%d", &num3);
    printf("%d\n", num3);

    // Calculate the sum using + operator
    // and store it in variable sum
    sum = num1 + num2 + num3;

    // Print the sum
    printf("\nSum of the 3 numbers is: %d", sum);

    return 0;
}
