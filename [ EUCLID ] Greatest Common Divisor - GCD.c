#include <stdio.h>

int main() 
{
    unsigned int a, b,temp;

    scanf("%u%u", &a, &b);
    while (b!=0)
    {
        temp = a % b;
        a= b;
        b=temp;
    }

    printf("%u", a);

    return 0;
}
