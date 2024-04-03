#include <stdio.h>
#include <conio.h>

int main()
{
    char arr[20];
    char n;
    int i, b, found;
    printf("Enter 6 Character Elements in the array\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%c", &arr[i]);
        fflush(stdin);
    }
    printf("Enter an Character to Search in the array\n");
    scanf("%c", &n);
    for (i = 0; i < 6; i++)
    {
        if (arr[i] == n)
        {
            found = 1;
            b = i;
            break;
        }
    }
    if (found != 1)
        printf("Sorry the Element is not found\n");
    else
    {
        printf("Element Found !!\n");
          if (b == 0)
        printf("Best Case\n");
    else if (b == 5)
        printf("Worst Case\n");
    else 
            printf("Average Case");
    }
  
    return 0;
}