#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "ckernel.h"

int getVectorPower() {
    int n = 1;
    do {
        printf("Enter vector size (power of 2): ");
        scanf("%d",&n); //2^n
    }while(n < 2);
    return n;
}

void fillVector(int vecsize, float (*vector)[vecsize]) {
    float dummy_float = 0.0;
    int count = 0;
    while(count < vecsize) {
        dummy_float = (float)rand()/(float)(RAND_MAX/11);
        (*vector)[count] = dummy_float;
        count = count + 1;
    }
}

void populateZ(int n, float (*Y_1)[n], float(*Y_2)[n],float (*X_1)[n],float (*X_2)[n], float (*Z)[n]) {
    int index = 0;
    while(index<n) {
        float x = ((*X_2)[index] - (*X_1)[index]);
        x=x*x;
        float y = ((*Y_2)[index] - (*Y_1)[index]);
        y=y*y;

        float z = sqrtf(x+y);
        (*Z)[index] = z;
        index = index + 1;
     }

} 

void printFirstTen(float Z[]) {
    int count = 0;
    while (count<10) {
        printf("%f ", Z[count]);
        count = count+1;
    }
}

void createVectors() {
    int powerV = getVectorPower();
    powerV = powerV*powerV;
    printf("powerV: %d\n",powerV);
    float Y_1[powerV], Y_2[powerV];
    float X_1[powerV], X_2[powerV];
    float Z[powerV];
    fillVector(powerV,&Y_1);
    printf("test val: %f\n",Y_1[0]);
    fillVector(powerV,&Y_2);
    fillVector(powerV,&X_1);
    fillVector(powerV,&X_2);
    populateZ(powerV,&Y_1,&Y_2,&X_1,&X_2,&Z);
    printFirstTen(Z);
}