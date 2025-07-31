#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "ckernel.h"

int getVectorPower() {
    int n = 1;
    do {
        printf("Enter vector size (power of 2): ");
        scanf("%d",n); //2^n
    }while(n < 2);
    return n;
}

void fillVector(float vector[],int vecsize) {
    float dummy_float = 5.1;
    int count = 0;
    while(count < vecsize) {
        vector[count] = dummy_float;
        count = count + 1;
    }
}

void populateZ(float Y_1[], float Y_2[],float X_1[],float X_2[], float Z[],int n) {
    int index = 0;
    while(index<n) {
        float x = pow((X_2[index]-X_1[index]),2);
        float y = pow((Y_2[index]-Y_1[index]),2);
        float z = sqrtf(x+y);
        Z[index] = z;
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
    powerV = pow(2,powerV);
    float Y_1[powerV], Y_2[powerV];
    float X_1[powerV], X_2[powerV];
    float Z[powerV];
    fillVector(Y_1,powerV);
    fillVector(Y_2,powerV);
    fillVector(X_1,powerV);
    fillVector(X_2,powerV);
    populateZ(Y_1,Y_2,X_1,X_2,Z,powerV);
    printFirstTen(Z);
}