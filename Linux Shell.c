#include <stdio.h>

int main(int argc, char *argv[])
{
	 printf("\n No of cmd line arguments passed = [%d]\n",argc);

	 int count = 0;
	 while (count < argc)
	 {
	 printf("\n arg [%d] = [%s]\n",count+1,argv[count]);
	 count++;
 }

 return 0;
}
