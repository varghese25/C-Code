#include <stdio.h>

// Create a structure called myStructure
struct MyStructure { // struct is keyword 
int myNum;
char myLetters; 

};

int main() {
// Create a structure variable of myStructure called s1
struct MyStructure s1;

// Assign values to members of s1
s1.myNum = 12;
s1.myLetters = 'B';

// Print values

printf("My Number: %i \n", s1.myNum);
printf("My Number: %c \n", s1.myLetters);

return 0;

}
