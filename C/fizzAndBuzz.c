
#include <stdio.h>
void fizzAndBuzz(int num, int val1, int val2)
{
    int i = 0;
    while (i <= num)
    {
        if ((i % val1 == 0) && (i % val2 == 0))
        {
            printf("%s\n", "fizz buzz");
        }
        else if( i % val1 == 0)
        {
            printf("%s\n", "fizz");
        }
        else if(i % val2 == 0)
        {
            printf("%s\n", "buzz");
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
        
    }
}

int main(){
    int num;
    scanf("%d", &num);
    int val1 = 3, val2 = 5;
    fizzAndBuzz(num, val1, val2);
    return 0;
}