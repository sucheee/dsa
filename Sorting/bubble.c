#include "stdio.h"
#include "math.h"


void bubbleSort(int arr[],int n){

    for (int i = 0; i < n-1; ++i) {
        int swapped = 0;
        for (int j = 0; j < n-i-1; ++j) {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(!swapped){
            return;
        }
    }

}

int main() {
    int arr[] = {64,25,24,12,22};
    int result = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,result);
    printf("\n");
    for (int i = 0; i < result; ++i) {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}