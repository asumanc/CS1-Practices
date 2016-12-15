#include<stdio.h>

int main(void)
{
 int a[10], t, i, j, n ;

 printf("Enter the limit : ") ;
 scanf("%d", &n) ;
 printf("\nEnter the numbers :\n\n");
 for(i = 0 ; i < n ; i++)
   scanf("%d", &a[i]) ;
 for(i = 0 ; i < n - 1 ; i++)
   for(j = 0 ; j < n - 1 ; j++)
     if(a[j] > a[j + 1])
     {
      t = a[j] ;
      a[j] = a[j + 1] ;
      a[j + 1] = t ;
     }
 printf("\nThe numbers in ascending order is :\n\n") ;
 for(i = 0 ; i < n ; i++)
   printf("%d\t", a[i]) ;
   printf("\n\nThe numbers in descending order is :\n\n") ;
 for(i = n -1 ; i >= 0 ; i--)
   printf("%d\t", a[i]) ;
return 0;
}