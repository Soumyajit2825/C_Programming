#include <stdio.h>
#include <string.h>
//reversing the arrays by using function


void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        // swap item arr[i] with arr[6-i]

        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
        printf("");
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Before reversing the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }

    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }

    return 0;
}