/**
 * Exercise 2-3
 *
 * Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value.
 * The allowable digits are 0 through 9, a through f and A through F.
*/

#include <math.h>
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int get_line(char line[], int max_length) {
    int c, i;
    i = 0;

    while((c = getchar()) != '\n') {
        line[i++] = c;
    }

    line[i] = '\0';

    return i;
}

int htoi(char input[]) {
    int offset = 0;
    size_t length = strlen(input);

    if(input[0] == '0' && (input[1] == 'x' || input[1] == 'X')) {
        offset = 1;
    }
    else {
        return -1;
    }

    int n = 0;
    int decimal = 0;

    for(int i = length - 1; i > offset; --i) {
        char c = input[i];
        int factor;

        if(c >= '0' && c <= '9') {
            factor = c - '0';
        }
        else if(c >= 'a' && c <= 'z') {
            factor = c - 51;
        }
        else if(c >= 'A' && c <= 'Z') {
            factor = c - 55;
        }

        decimal += factor * pow(16, n);
        ++n;
    }

    return decimal;
}

int main(void) {
    int len;
    char line[MAX_LENGTH];

    while((len = get_line(line, MAX_LENGTH)) > 0) {
        int decimal = htoi(line);
        if(decimal > -1) {
            printf("%s = %d\n", line, htoi(line));
        }
        else {
            printf("\"%s\" is not a valid hexadecimal string\n", line);
        }
    }

    return 0;
}
