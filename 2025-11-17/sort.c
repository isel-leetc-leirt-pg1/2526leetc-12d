#include <stdio.h>
#include <string.h> // Para memcpy

// Função para imprimir o array
void print_array(int arr[], int n) {
    printf("[ ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

// Bubble Sort
void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


// Selection Sort
void selection_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if(min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

// Insertion Sort
void insertion_sort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int original[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(original)/sizeof(original[0]);
    int arr[n];

    // Bubble Sort
    memcpy(arr, original, sizeof(original)); // copia o array original
    printf("Bubble Sort: Antes    : ");
    print_array(arr, n);
    bubble_sort(arr, n);
    printf("Bubble Sort: Depois   : ");
    print_array(arr, n);
    printf("\n");

   // Selection Sort
    memcpy(arr, original, sizeof(original));
    printf("Selection Sort: Antes : ");
    print_array(arr, n);
    selection_sort(arr, n);
    printf("Selection Sort: Depois: ");
    print_array(arr, n);
    printf("\n");


    // Insertion Sort
    memcpy(arr, original, sizeof(original));
    printf("Insertion Sort: Antes : ");
    print_array(arr, n);
    insertion_sort(arr, n);
    printf("Insertion Sort: Depois: ");
    print_array(arr, n);
    printf("\n");

    return 0;
}
