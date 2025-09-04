#include <stdio.h>

int main() {
    int start,count,i = 1;
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter count: ");
    scanf("%d", &count);
    printf("Try programiz.pro");
    while(i <= count )
    {
        printf("%d ",start + i);
        i++;
    }
    return 0;
}

