#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#ifndef GET_VECTOR_POWER
#define GET_VECTOR_POWER
int getVectorPower();
#endif

#ifndef FILL_VECTOR
#define FILL_VECTOR
void fillVector(float vector[],int vecsize);
#endif

#ifndef POPULATE_Z
#define POPULATE_Z
void populateZ(float Y_1[], float Y_2[],float X_1[],float X_2[], float Z[],int n);
#endif

#ifndef PRINT_FIRST_TEN
#define PRINT_FIRST_TEN
void printFirstTen(float Z[]);
#endif

#ifndef CREATE_VECTORS
#define CREATE_VECTORS
void createVectors();
#endif