#include<stdio.h>

int main(){
    int array[] = {9, 5, 2, 8, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j, min_idx, temp;

    // Thuật toán Selection Sort
    for(i = 0; i < n - 1; i++){
        min_idx = i;

        for(j = i + 1; j < n; j++){
            if(array[j] < array[min_idx]){
                min_idx = j;
            }
        }

        if(min_idx != i){
            temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;
        }
    }

    printf("Mang sau sap xep: ");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}