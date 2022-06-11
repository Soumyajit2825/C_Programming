#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char * argv[])
{
    /*You have to create a command line calculator utility to add/substract/division/multiplication by using two numbers.
    say "add" for addition
    "substract" for substraction
    "multiply" for multiplication
    "divide" for division*/

    char * operation;
    int num1,num2;
    operation=argv[1];
    num1=atoi(argv[2]);
    num2=atoi(argv[3]);

    printf ("Operation is %s\n",operation);
   

    if(strcmp(operation,"add")==0)
    {
        printf ("%d\n",num1+num2);
    }
    else if(strcmp(operation,"substract")==0)
    {
        printf ("%d\n",num1-num2);
    }
    else if(strcmp(operation,"multiply")==0)
    {
        printf ("%d\n",num1*num2);
    }
    else if(strcmp(operation,"divide")==0)
    {
        printf ("%d\n",num1/num2);
    }

    return 0;
}