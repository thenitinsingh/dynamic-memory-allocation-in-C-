#include <stdio.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter the number of elements: %d", &n);
    scanf("%d", &n);
    int a[n];
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {

        scanf("%d", a[i]);
        sum += (a[i]);
    }
    printf("Sum=%d", sum);
}
