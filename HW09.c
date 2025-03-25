#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NROW 3
#define NCOL 5

double dRand();
double dAvg(double arrp[]);
double dMax(double * pMax);

int main(void) {
    double arr[NCOL][NROW];
    double max;
    int i = 0, j = 0;
    
    srand( (unsigned int) time(0));
    printf("Row %6d %6d %6d %6d %6d      Average\n", 0, 1, 2, 3, 4);
    for ( i = 0; i < NROW; i++) {
        printf("%3d", j);
        for ( j = 0; j < NCOL; j++) {
            arr[j][i] = dRand();
            printf(" %6.3lf ", arr[j][i]);
        }
        printf(" %5.3lf\n\n",dAvg(arr[i]));
    }

    return 0;

}

double dRand() {

    return (rand() % 10);

}

double dAvg(double arr[]) {
    double avg;
    for ( int i = 0; i < NROW; i++) {
        avg += arr[i];
    }
    return avg / NROW;
}

double dMax(double * pMax) {

    return 0.0;

}