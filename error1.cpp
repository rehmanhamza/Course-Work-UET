#include<stdio.h>

int main(void)
{
    int first, second, third, fourth;
    printf("Enter four integers (separated by space): ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    if((first>second) && (first>third) && (first>fourth))
        printf("\nFirst number is largest");
    else if((second>first) && (second>third) && (second>fourth))
        printf("\nSecond number is largest");
    else if((third>second) && (third>first) && (third>fourth))
        printf("\nThird number is largest");
    else if((fourth>second) && (fourth>third) && (fourth>first))
        printf("\nFourth number is largest");

    if((first<second) && (first<third) && (first<fourth))
        printf("\nFirst number is smallest");
    else if((second<first) && (second<third) && (second<fourth))
        printf("\nSecond number is smallest");
    else if((third<second) && (third<first) && (third<fourth))
        printf("\nThird number is smallest");
    else if((fourth<second) && (fourth<third) && (fourth<first))
        printf("\nFourth number is smallest");

    printf("\n"); 
    return 0;
}
