#include<stdio.h>
#include<math.h>

int main()
{
    long long num;
    int coun=0;
    printf("Enter Number: ");
    scanf("%lld\n",&num);
    coun=log10(num)+1;
    printf("Number of Digits in %lld are %d\n", num, coun);

    return 0;
}
