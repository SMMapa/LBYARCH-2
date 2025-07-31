#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "ckernel.h"

int getVectorPower() {
    int n = 1;
    do {
        printf("Enter vector size (power of 2): ");
        scanf("%d",&n); //2^n
    }while(n < 2);
    return n;
}

int main() {
    int choice = -1;
    do {
        system("cls");
        printf("[1] C kernel\n[2] ASM kernel: ");
        scanf("%d",&choice);
    }while((choice != 1) && (choice != 2));
    if(choice == 1) {
        int p = getVectorPower();
        createVectors(p);
    }
    return 0;
}