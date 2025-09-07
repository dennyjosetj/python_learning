#include <stdio.h>
#include <stdlib.h>


// void bubble_sort(int *arr, int n)
// {
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(arr[i]<arr[j]){
//                 arr[i] = arr[i] + arr[j];
//                 arr[j] = arr[i] - arr[j];
//                 arr[i] = arr[i] - arr[j];
//             }
//         }
//     }
// }


void binary_search(int *arr, int start_index, int end_index, int search_element)
{
    
    while(start_index <= end_index)
    {
        int mid_index = (start_index + end_index) / 2;

        if(arr[mid_index] == search_element)
        {
            printf("element found at pos %d\n", mid_index+1);
            return;
        }
        else if (arr[mid_index] > search_element)
        {
            end_index = mid_index - 1;
        }
        else
        {
            start_index = mid_index + 1;
        }
    }
    printf("Element not found.\n");
}

int main(){
    int num;
    int search_element;
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
    search_element = 10;
    binary_search(input, 0, num-1, search_element);

    printf("\n");
    free(input);
    input = NULL;

    printf(" Input Test set started executing !!!!!!!\n");
    int test1[] = {4, 2, 9, 1, 5};
    int size1 = sizeof(test1) / sizeof(test1[0]);
    binary_search(test1, 0, size1, search_element);

    int test2[] = {-3, 0, 2};
    int size2 = sizeof(test2) / sizeof(test2[0]);
    binary_search(test2, 0, size2, search_element);

    int test3[] = {7, 3, 9, 3, 2, 1};
    int size3 = sizeof(test3) / sizeof(test3[0]);
    binary_search(test3, 0, size3, search_element);

    int test4[] = {42};
    int size4 = sizeof(test4) / sizeof(test4[0]);
    binary_search(test4, 0, size4, search_element);

    return 0;
}