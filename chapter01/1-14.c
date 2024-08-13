#include <stdio.h>

#define LENGTH 1024

int main() {
    int c;
    int chars[LENGTH] = {0};

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') {
            continue;
        }
        ++chars[c];
    }

    for(int i = 0; i < LENGTH; i++) {
        if(chars[i] > 0) {
            printf("%c: ", i);
            for(int j = 0; j < chars[i]; j++) {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
