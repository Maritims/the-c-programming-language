#include <stdio.h>

#define LENGTH 1024

int main() {
    int c, length;
    int lengths[LENGTH] = {0};

    length = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') {
            ++lengths[length];
            length = 0;
            putchar('\n');
        }
        else {
            ++length;
            putchar(c);
        }
    }

    printf("HISTOGRAM\n");
    printf("------------------\n");
    for(int i = 0; i < LENGTH; i++) {
        if(lengths[i] > 0) {
            printf("%3d: ", lengths[i]);
            for(int j = 0; j < lengths[i]; j++) {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
