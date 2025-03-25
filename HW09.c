#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NROW 3
#define NCOL 5
#define FLOATHOLDER "%8.3lf"
#define INTHOLDER "%8d"

double dRand();
double dAvg(double arr[]);
void dMax(double * pMax, double value);

int main(void) {
    double arr[NCOL][NROW];
    double max;
    int i = 0, j = 0;
    
    srand( (unsigned int) time(0));
    printf("Row " INTHOLDER INTHOLDER INTHOLDER INTHOLDER INTHOLDER"   Average\n", 0, 1, 2, 3, 4);
    for ( i = 0; i < NROW; i++) {
        printf("%3d ", i);
        for ( j = 0; j < NCOL; j++) {
            arr[j][i] = dRand();
            printf( FLOATHOLDER , arr[j][i]);
            dMax(&max, arr[j][i]);
        }
        printf(" " FLOATHOLDER"\n\n",dAvg(arr[i]));
    }
    printf("Max = %lf", max);

    return 0;

}

double dRand() {

    return rand()  % 10;

}

double dAvg(double arr[]) {
    double avg;
    for ( int i = 0; i < NROW; i++) {
        avg += arr[i];
    }
    return avg / NROW;
}

void dMax(double * pMax, double val) {
    if (*pMax < val) {
        *pMax = val;
    }

}