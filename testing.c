#include<stdio.h>
#include<string.h>
 
int main()
{
        char string_a[20];
        char string_b[20];
        printf("Enter the First String:\t");
        scanf("%s", string_a);
        printf("\nEnter the Second String:\t");
        scanf("%s", string_b);
        printf("\nFirst String:\t%s\n", string_a);
        printf("\nSecond String:\t%s", string_b);
        strcat(string_a, string_b);
        printf("\nFirst String:\t%s\n", string_a);
        printf("\nSecond String:\t%s", string_b);
        printf("\n");
        return 0;
}
