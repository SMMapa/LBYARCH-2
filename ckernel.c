#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int getVectorPower() {
    int n = 1;

    do {
        printf("Enter vector size (power of 2): ");
        scanf("%d",n); //2^n
    }while(n < 2);
    return n;
}

int* genRandomVector(int vecSize) {
    int* vec = (int*)malloc(vecSize * sizeof(int));
    //todo: generate a crapton of random numbers >_<
}