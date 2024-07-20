#include <stdio.h>
#include <stdlib.h>

// Create a function (myFunction)

void myFunction() {
printf("Test1  myFunction \n");
 myOtherFunction();
 
 }
 
 void myOtherFunction() {
 printf("Test2  myOtherFunction");
 
 }
 `
 int main() {
 myFunction();
 myOtherFunction();
 
 return 0;
 }
