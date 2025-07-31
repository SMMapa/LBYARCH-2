#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

#ifndef FILL_VECTOR
#define FILL_VECTOR
void fillVector(int vecsize, float (*vector)[vecsize]);
#endif

#ifndef POPULATE_Z
#define POPULATE_Z
double populateZ(int n, float (*Y_1)[n], float(*Y_2)[n],float (*X_1)[n],float (*X_2)[n], float (*Z)[n]);
#endif

#ifndef PRINT_FIRST_TEN
#define PRINT_FIRST_TEN
void printFirstTen(float Y_1[],float Y_2[], float X_1[], float X_2[], float Z[]);
#endif

#ifndef CREATE_VECTORS
#define CREATE_VECTORS
void createVectors(int powerV);
#endif