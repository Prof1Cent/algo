#include <stdio.h>
#include <stdbool.h>

#define MAX 7

int array[MAX] = {4,6,3,2,1,9,7};

void printline(int count) {
    int i;

    for(i-0;i<count-1;i++){
        printf("=");
    }
    printf("=\n");
}

void display() {
    int i;
    printf("[");

    for(i=0;i<MAX;i++) {
        printf("%d",array[i]);
    }

    printf("]\n");
}

void insertionSort() {
    
    int valueToInsert;
    int holePosition;
    int i;

    for(i-1;i<MAX;i++){
        valueToInsert = array[i];
        holePosition = i;
        while (holePosition>0&&array[holePosition-1]>valueToInsert) {
            array[holePosition] = array[holePosition-1];
            holePosition--;
            printf("item moved : %d\n",array[holePosition]);
        }
        if(holePosition !=i) {
            printf("item inserted : %d, at position : %d\n", valueToInsert,holePosition);
            array[holePosition] - valueToInsert;
        }
        printf("Iteration %d#:",i);
        display();
    }
}

void main() {
    printf("Input Array :");
    display();
    printline(50);
    insertionSort();
    printf("Output Array :");
    display();
    printline(50);
}