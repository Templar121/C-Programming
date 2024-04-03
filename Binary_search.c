#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10];
    int i, j, upper, lower, middle, n, c, x, a;
    int temp;
    printf("Enter Number of elements in the array (MAX 10)\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %dth element\n", (i + 1));
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Elements in the Array are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Enter Element to be searched\n");
    scanf("%d", &x);
    lower = 0;
    upper = n - 1;
    c = 0;
    while (lower <= upper)
    {
        middle = (lower + upper) / 2;
        if (arr[middle] == x)
        {
            c = 1;
            a = middle;
            break; // Element found, exit the loop
        }
        else if (arr[middle] > x)
        {
            upper = middle - 1;
        }
        else
        {
            lower = middle + 1;
        }
    }

    if (c == 1)
    {
        printf("Element found at position = %d\n", (middle + 1));
    }
    else
    {
        printf("Element not found \n!!");
    }
    getch();
}