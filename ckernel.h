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
void fillVector(int vecsize, float (*vector)[vecsize]);
#endif

#ifndef POPULATE_Z
#define POPULATE_Z
void populateZ(int n, float (*Y_1)[n], float(*Y_2)[n],float (*X_1)[n],float (*X_2)[n], float (*Z)[n]);
#endif

#ifndef PRINT_FIRST_TEN
#define PRINT_FIRST_TEN
void printFirstTen(float Z[]);
#endif

#ifndef CREATE_VECTORS
#define CREATE_VECTORS
void createVectors();
#endif