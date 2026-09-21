#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[6];               // 6 rolls

    srand(time(NULL));        // different results every run

    for (int i = 0; i < 6; i++) {
        arr[i] = rand() % 6 + 1;   // dice: 1 to 6
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);     // space between numbers
    }
    printf("\n");             // new line at the end

    return 0;
}