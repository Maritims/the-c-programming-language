#include <stdio.h>

#define MAX_LENGTH 1000

int get_line(char line[], int max_length) {
    int c, i;
    i = 0;

    while((c = getchar()) != EOF && c != '\n' && c != '\t' && c != ' ' && i < max_length - 1) {
        line[i++] = c;
    }

    line[i] = '\0';

    return i;
}

void reverse(char destination[], char source[], int len) {
    for(int i = 0; i < len; i++) {
        destination[i] = source[len - i - 1];
    }
    destination[len] = '\0';
}

int main() {
    int len;
    char line[MAX_LENGTH];
    char reversed[MAX_LENGTH];

    while((len = get_line(line, MAX_LENGTH)) > 0) {
        reverse(reversed, line, len);
        printf("%s -> %s\n", line, reversed);
    }

    return 0;
}
