#include <stdio.h>
#define MAX 20

int main(void) {
    int wA = 2, kA = 3;
    double A[MAX][MAX] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0}
    };
    
    if (wA < 1 || wA > MAX || kA < 1 || kA > MAX ||
        wB < 1 || wB > MAX || kB < 1 || kB > MAX) {
        printf("Blad: wymiary poza zakresem\n");
        return 1;
    }
    if (wA !=wB || kA != kB) {
        printf("Blad: niezgodne wmiary\n");
        return 1;
    }

    int i, j;
    for (i = 0; i < wA; i++) {
        for (j = 0; j < kA; j++) {
          printf("%8.2f", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}