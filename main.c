#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void addMartrix(int A[][COLS], int B[][COLS], int C[][COLS]){
    int i;
    int j;
    for (j=0; j<3; j++)
    {
	
	 for(i=0; i<3; i++)
	   C[j][i] = A[j][i] + B[j][i];
	
    }
}

void printMatrix(int A[][COLS]){
	int i;
	int j;
	for(j=0; j<3; j++){
	
	
	 for(i=0; i<3; i++){
	   printf("%3d", A[j][i]);
	   }  
	   print("\n");  
	}
}
int main(int argc, char *argv[]) {
	
	int A[ROWS][COLS] = {
  	 {2,3,0},
	 {8,9,1},
	 {7,0,5}};

    int B[ROWS][COLS] = {
  	 {1,0,0},
	 {0,1,0},
	 {0,0,1}};
	 
    int C[ROWS][COLS];
    
    addMatrix(A,B,C);
    printMartrix(C);
    	 
	system("PAUSE"); 
	return 0;
}
