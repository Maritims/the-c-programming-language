#include <stdio.h>

int main() {
    int c, nl, tabs, blanks;

    nl = tabs = blanks = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n') {
            ++nl;
        }
        else if(c == '\t') {
            ++tabs;
        }
        else if(c == ' ') {
            ++blanks;
        }
    }
    printf("newlines: %d, tabs = %d, blanks = %d\n", nl, tabs, blanks);

    return 0;
}
