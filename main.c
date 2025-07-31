#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "ckernel.h"

extern void asmkernel(float* X1, float* X2, float* Y1, float* Y2, float* Z, size_t n);

int getVectorPower() {
    int n = 1;
    do {
        printf("Enter vector size (power of 2): ");
        scanf("%d", &n); //2^n
    } while (n < 2);
    return n;
}

int main() {
    int choice = -1;
    do {
        system("cls");
        printf("[1] C kernel\n[2] ASM kernel: ");
        scanf("%d", &choice);
    } while ((choice != 1) && (choice != 2));
    if (choice == 1) {
        int p = getVectorPower();
        createVectors(p);
    }
    else if (choice == 2) {
        int p = getVectorPower();
        size_t n = 1 << p; // 2^p
        float* X1 = (float*)malloc(n * sizeof(float));
        float* X2 = (float*)malloc(n * sizeof(float));
        float* Y1 = (float*)malloc(n * sizeof(float));
        float* Y2 = (float*)malloc(n * sizeof(float));
        float* Z = (float*)malloc(n * sizeof(float));
        createVectors(p); // Initialize vectors
        asmkernel(X1, X2, Y1, Y2, Z, n);
        free(X1);
        free(X2);
        free(Y1);
        free(Y2);
        free(Z);
	}

   
    return 0;
}