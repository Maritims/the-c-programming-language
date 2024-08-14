#include <stdio.h>

#define SPACES_PER_TAB 2

int main() {
    int c;
    int blanks = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            blanks++;
        }
        else {
            blanks = 0;
        }
        
        if(blanks == SPACES_PER_TAB) {
            putchar('\t');
            blanks = 0;
        }
        else {
            putchar(c);
        }
    }

    return 0;
}
