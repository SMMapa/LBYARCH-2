#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include "ckernel.h"



void fillVector(int vecsize, float (*vector)[vecsize]) {
    float dummy_float = 0.0;
    int count = 0;
    while(count < vecsize) {
        dummy_float = (float)rand()/(float)(RAND_MAX/11);
        (*vector)[count] = dummy_float;
        count = count + 1;
    }
}

double populateZ(int n, float (*Y_1)[n], float(*Y_2)[n],float (*X_1)[n],float (*X_2)[n], float (*Z)[n]) {
    int index = 0;
    clock_t begin = clock();
    while(index<n) {
        float x = ((*X_2)[index] - (*X_1)[index]);
        x=x*x;
        float y = ((*Y_2)[index] - (*Y_1)[index]);
        y=y*y;

        float z = sqrtf(x+y);
        (*Z)[index] = z;
        index = index + 1;
     }
    clock_t end = clock();
    double timetaken = (double)(end-begin) / CLOCKS_PER_SEC;
    return timetaken;
} 

void printFirstTen(float Y_1[],float Y_2[], float X_1[], float X_2[], float Z[]) {
    int count = 0;
    while (count<10) {
        printf("Iteration %d - Y1: %f, Y2: %f, X1: %f, X2: %f, Z: %f \n", (count+1), Y_1[count], Y_2[count], X_1[count], X_2[count], Z[count]);
        count = count+1;
    }
}

void createVectors(int powerV) {
    //int powerV = getVectorPower();
    powerV = pow(2,powerV);
    printf("powerV: %d\n",powerV);
    float Y_1[powerV], Y_2[powerV];
    float X_1[powerV], X_2[powerV];
    float Z[powerV];
    fillVector(powerV,&Y_1);
  //  printf("test val: %f\n",Y_1[0]);
    fillVector(powerV,&Y_2);
    fillVector(powerV,&X_1);
    fillVector(powerV,&X_2);
    
    double timetaken = populateZ(powerV,&Y_1,&Y_2,&X_1,&X_2,&Z);
    printFirstTen(Y_1, Y_2, X_1, X_2, Z);
    printf("time taken: %f",timetaken);
}