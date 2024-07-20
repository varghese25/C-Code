#include <stdio.h>
#include <stdlib.h>

int main(){

printf("<<<Calculator>>\n");
	 int num1, num2;
	 printf("Enter Number 1:");
	 scanf("%d", &num1);
	 
	 printf("Enter Number 2:");
	 scanf("%d", &num2);
	
	 printf("Answer: %d\n", num1 + num2);
	 
     getch();
	 return 0;	 
}