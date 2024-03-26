#include <stdio.h>
#include <math.h>

void swapper(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
 * Time complexity - O(n^2)
 * Space Complexity - O(1)
 *
 * */
void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; ++i) {
        int min = i;
        for (int j = i; j < n; ++j) {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swapper(&arr[i],&arr[min]);
        }
    }
}

int main() {
    int arr[] = {64,25,24,12,22,11,1110};
    int result = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,result);
    printf("\n");
    for (int i = 0; i < result; ++i) {
        printf("%d\t",arr[i]);
    }


    return 0;
}
