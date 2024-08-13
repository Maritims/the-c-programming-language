#include <stdio.h>

#define MAX_LENGTH                      1000
#define LENGTH_REQUIREMENT_FOR_PRINT    80

int get_line(char line[], int max_length) {
    int c, i;
    i = 0;

    while((c = getchar()) != EOF && c != '\n' && i < max_length - 1) {
        line[i++] = c;
    }

    if(c == '\n') {
        line[i++] = c;
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
    int len;
    char line[MAX_LENGTH];

    while((len = get_line(line, MAX_LENGTH)) > 0) {
        printf("Line has %d characters..", len);
        if(len >= LENGTH_REQUIREMENT_FOR_PRINT) {
            printf("printing line: %s", line);
        }
        else {
            printf("skipping line, it's too short\n");
        }
    }

    return 0;
}
