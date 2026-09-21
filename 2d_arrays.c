#include <stdio.h>

int main() {

    int numbers[2][3] = {
        {10, 20, 30},    // row 0
        {40, 50, 60}     // row 1
    };

    numbers[1][2] = 777;   // no data type here, = only assigns a new value: 60 → 777

    for (int i = 0; i < 2; i++) {        // OUTER LOOP → ROWS
        for (int j = 0; j < 3; j++) {    // INNER LOOP → COLUMNS
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// PRIMARY KEY : index = row × column number  + column 
    
//            row = index / column  number
       //         column = index % column number 



       