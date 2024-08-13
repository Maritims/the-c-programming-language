#include <stdio.h>

int main() {
    int c;
    int previous_was_blank = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            if(!previous_was_blank) {
                putchar(c);
                previous_was_blank = 1;
            }
        }
        else {
            putchar(c);
            previous_was_blank = 0;
        }
    }

    return 0;
}
