#include <stdio.h>

int main() {
    int choice;
    printf("Choose an infinite loop method:\n");
    printf("1.while(1)\n");
    printf("2.for(;;)\n");
    printf("3.do while(1)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Running while(1) loop...\n");
            while(1){
                printf("while(1) loop\n");
            }
            break;
        case 2:
            printf("Running for(;;) loop...\n");
            for(;;){
                printf("for(;;) loop\n");
            }
            break;
        case 3:
            printf("Running do while(1) loop...\n");
            do{
                printf("do while(1) loop\n");
            }while(1);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
