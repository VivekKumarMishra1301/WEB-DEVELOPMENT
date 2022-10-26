#include <stdio.h>
int main()
{
    int a[3];
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= 3; i++)
    {
        printf("%d", a[i]);
    }
}
