#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop to print all rows
    for (int i = 0; i < rows; i++) {

        // Inner loop to print the 
        // numbers in each row
        for (int j = 0; j < rows - i; j++) {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}
