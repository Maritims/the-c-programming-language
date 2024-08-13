#include <stdio.h>

#define MAX_LENGTH 10

int get_line(char line[], int max_length) {
    int c, i;

    i = 0;

    while((c = getchar()) != EOF && c != '\n' && i < max_length - 1) {
        line[i] = c;
        ++i;
    }

    if(c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void copy(char destination[], char source[]) {
    int i = 0;
    while((destination[i] = source[i]) != '\0') {
        ++i;
    }
}

int main() {
    int len, max_len;
    char line[MAX_LENGTH];
    char next_line[MAX_LENGTH];
    char longest_line[MAX_LENGTH];

    max_len = 0;
    while((len = get_line(line, MAX_LENGTH)) > 0) {
        if(len == MAX_LENGTH - 1) {
            // it's a least as long as the buffer
            int next_len;
            while((next_len = get_line(next_line, MAX_LENGTH)) > 0) {
                len += next_len;
            }
        }

        if(len > max_len) {
            // can we know for sure that the line is longer than the buffer?
            // what if it's exactly as long as the buffer?

            max_len = len;
            copy(longest_line, line);
        }
    }

    if(max_len > 0) {
        printf("%d -> %s\n", max_len, longest_line);
    }

    return 0;
}
