#include "stdio.h"

void insertionSort(int arr[],int n) {
    for (int i = 0; i <=n-1; ++i) {
    int j = i;
    while(j > 0 && arr[j-1] > arr[i]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
    arr[j+1] = arr[i];
    }

}


int main() {



    return 0;
}

