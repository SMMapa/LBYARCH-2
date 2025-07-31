#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "ckernel.h"

int main() {
    int choice = -1;
    do {
        system("cls");
        printf("[1] C kernel\n[2] ASM kernel: ");
        scanf("%d",&choice);
    }while((choice != 1) && (choice != 2));
    if(choice == 1) {
        createVectors();
    }
    return 0;
}