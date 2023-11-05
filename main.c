#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[SIZE];
	int i, average;
	int sum;
	printf("5명의 점수를 입력하시오:");
	
	sum = 0;	
	for (i=0; i<SIZE; i++) {
	
	  scanf("%d", &grade[i]);
	  sum += grade[i];
	  
}
   average = sum/SIZE; 
   printf("score average = %i\n", average);
	  
    system("PAUSE"); 
	return 0;
}
