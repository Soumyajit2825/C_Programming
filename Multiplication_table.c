#include <stdio.h>
/*
Print a Multiplication Table of given number by user input.
*/
int main(){
    
   int num,x=1;
	
	printf ("Enter any number: \n");
	scanf ("%d",&num);
	
	while (x<=10)
	{
		printf ("%d * %d = %d\n",num,x,num*x);
		x++;
	}
    return 0;
}
