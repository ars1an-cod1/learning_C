#include <stdio.h>    // printf, scanf → input/output
#include <stdlib.h>   // rand, srand → random numbers
#include <time.h>     // time → current time in seconds

int main() {
    int arr[10];
    srand(time(NULL));   // seed the random number generator
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;   // random numbers between 0 and 99
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// PRIMARY KEY i = index number not real number