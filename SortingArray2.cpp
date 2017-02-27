#include<stdio.h>

#include<stdlib.h>
int main(void)
{
int *a,n,i,j,t;
a=(int *)malloc(n *sizeof(int));

	printf("\nEnter the number of integers to be sorted in descending order: ");
	scanf("%d",&n);
	
	printf("\nEnter the %d numbers to be sorted in descending order one by one: ",n);
	
	for(i=0;i<=n-1;i++){
	scanf("%d", (a+i));
}

for(i=0;i<n;i++){
	for(j=0;j<=i;j++){
	if(*(a+i)>*(a+j)){
	t=*(a+i);
	*(a+i)=*(a+j);
	*(a+j)=t;
 		}
	}
}
	printf("\nAfter sorting in descending order: ");
	for(i=0;i<n;i++){
		printf("\n%d",*(a+i));
	}


return 0;
}