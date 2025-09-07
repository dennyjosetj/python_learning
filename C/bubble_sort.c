#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *arr, int n)
{
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]<arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}
void print_array(int input[], int num){
    printf("\nsorted array is: ");
    for(int i = 0; i< num; i++){
        printf("%d ", input[i]);
    }
}

int main(){
    int num;
    printf("Enter the size of the array: \n");
    scanf("%d", &num);
    int *input = (int *) malloc(sizeof(int) * num);
    if (input == NULL){
        printf("memory allocation Failed!!");
        return 0;
    }
    printf("enter the elements: ");
    for(int i = 0; i<num; i++){
        scanf("%d",&input[i]);
    }
    bubble_sort(input, num);
    print_array(input, num);

    printf("\n");
    free(input);
    input = NULL;

    printf(" Input Test set started executing !!!!!!!\n");
    int test1[] = {4, 2, 9, 1, 5};
    int size1 = sizeof(test1) / sizeof(test1[0]);

    bubble_sort(test1, size1);
    print_array(test1, size1);
    printf("\n");
    int test2[] = {-3, 0, 2};
    int size2 = sizeof(test2) / sizeof(test2[0]);
    bubble_sort(test2, size2);
    print_array(test2, size2);
    printf("\n");

    int test3[] = {7, 3, 9, 3, 2, 1};
    int size3 = sizeof(test3) / sizeof(test3[0]);
    bubble_sort(test3, size3);
    print_array(test3, size3);
    printf("\n");

    int test4[] = {42};
    int size4 = sizeof(test4) / sizeof(test4[0]);
    bubble_sort(test4, size4);
    print_array(test4, size4);
    printf("\n");

    return 0;
}