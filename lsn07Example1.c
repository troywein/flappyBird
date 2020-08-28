/** lsn07Example1.c
* ===========================================================
* Name: CS210
* Section:
* Project: #define Example
* Purpose: Example to demonstrate concepts.
* Documentation:  None
* ===========================================================
*/
#include <stdio.h>

#define DEBUG 0 // 0 to turn off debugging

int main () {

    int sum = 0;
    int numIters = 10;

    // a loop that computes sum of first
    // numIters integers
    for(int i = 1; i <= numIters; i++) {
        sum = sum + i;
        if (DEBUG) {
            printf("current sum = %d, current integer = %d\n", sum, i);
        }
    }

    printf("sum = %d\n", sum);
    printf("calculated sum = %d\n", (numIters * (numIters + 1)) / 2);

}


