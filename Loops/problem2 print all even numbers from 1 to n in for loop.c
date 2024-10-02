//Print all numbers from 1 to n in for loop

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i = i + 2)
    {
     printf("%d\n", i);
    }
}
