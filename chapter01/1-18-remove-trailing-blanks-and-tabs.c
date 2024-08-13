#include <stdio.h>

#define MAX_LENGTH 1000

int get_line(char line[], int max_length) {
    int c, i;
    i = 0;

    while((c = getchar()) != EOF && c != '\n' && i < max_length - 1) {
        line[i++] = c;
    }

    while((line[i - 1] == ' ' || line[i - 1] == '\t') && i >= 0) {
        line[i - 1] = '\0';
        --i;
    }

    if(c == '\n') {
        line[i++] = c;
    }

    line[i] = '\0';

    return i;
}

int main() {
    int len;
    char line[MAX_LENGTH];

    while((len = get_line(line, MAX_LENGTH)) > 0) {
        printf("%d -> %s", len, line);
    }

    return 0;
}
