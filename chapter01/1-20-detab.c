#include <stdio.h>

#define SPACES_PER_TAB 2

int main() {
    int c;

    while((c = getchar()) != EOF) {
        if(c == '\t') {
            for(int i = 0; i < SPACES_PER_TAB; i++) {
                putchar(' ');
            }
        }
        else {
            putchar(c);
        }
    }
    return 0;
}
