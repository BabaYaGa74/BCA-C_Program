#include<stdio.h>
int main()
{
    int a[50], b[50], num1, num2, i, j, m[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &num1);
    printf("Enter Array 1 Elements: \n");
    for(i=0; i<num1; i++)
    {
        scanf("%d", &a[i]);
        m[i] = a[i];
    }
    j = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &num2);
    printf("Enter Array 2 Elements: \n");
    for(i=0; i<num2; i++)
    {
        scanf("%d", &b[i]);
        m[j] = b[i];
        j++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<j; i++)
        printf("%d ", m[i]);
    return 0;
}
