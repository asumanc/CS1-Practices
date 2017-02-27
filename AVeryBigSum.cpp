#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main () 
{

	int Original[SIZE]= {26,14,57,33,41};
	int i, j, num, temp;
	int *pointer1;
	int *pointer2;
	
	pointer1 = (int *)malloc(SIZE*sizeof(int));
    pointer2 = (int *) malloc(SIZE*sizeof(int));

	for(i=0; i<SIZE; ++i){
		pointer1[i] = Original[i];
        pointer2[i] = Original[i];
	}


	for(j=0; j<(SIZE-1); j++){
		for(i=0; i<(SIZE-1); i++){
			if(pointer1[i+1] < pointer1[i]){
				temp = pointer1[i];
				pointer1[i] = pointer1[i+1];
				pointer1[i+1] = temp;
			}//if
		}//for
	}//for
	
	for(j=0; j<(SIZE-1); j++){
		for(i=0; i<(SIZE-1); i++){
			if(pointer2[i+1] > pointer2[i]){
				temp = pointer2[i];
				pointer2[i] = pointer2[i+1];
				pointer2[i+1] = temp;
			}//if
		}//for
	}//for

	printf("Ascending\tOriginal\tDescending\n");
	for (i=0; i<SIZE; i++) 
		printf("%5d    %10d \t %10d\n", pointer1[i], Original[i], pointer2[i]);

return 0;

}