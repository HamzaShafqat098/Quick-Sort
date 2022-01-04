#include <stdio.h>

#include <stdlib.h>

#define SIZE 5

int array[SIZE];

void quickSort(int start , int end);

int partition(int left , int right);

void swap(int a , int b);

int main() {

    // printf("Hello, World!\n");

    int i;

    printf("Enter 5 Elements \n");

    for (i = 0; i < SIZE; i++){

        printf("Enter Element %d :: \n",i + 1);

        scanf("%d",&array[i]);

    }

    printf("Elements Are :: \n");

    for (i = 0; i < SIZE; i++){

        printf("%d \n",array[i]);

    }

    quickSort(0 , SIZE - 1);

    printf("Elements After Sorting Are :: \n");

    for (i = 0; i < SIZE; i++){

        printf("%d \n",array[i]);

    }

    return 0;

}

void swap(int a , int b){

    int temp;

    temp = array[a];

    array[a] = array[b];

    array[b] = temp;

}

int partition(int left , int right){

    int i;

    int j;

    i = left;

    j = left;

    int pivot = array[right];

    while (j < right){

        if (array[j] < pivot){

            swap(i , j);

            i = i + 1;

        }

        j = j + 1;

    }

    swap(i , right);

    return i;

}

void quickSort(int start , int end){

    if (start >= end){

        return;

    } else{

        int pivot_Index = partition(start , end);

        quickSort(start , pivot_Index - 1);

        quickSort(pivot_Index + 1 , end);

    }

}