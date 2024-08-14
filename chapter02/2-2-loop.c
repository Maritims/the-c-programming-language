/**
 * Exercise 2-2: Write a loop equivalent to the for loop above without using && or ||.
 *
 * The for loop in question: for(i = 0; i < lim - 1 && (c=getchar()) != '\n' && c != EOF; ++i)
*/

#include <stdio.h>
#define MAX_LENGTH 1000

int get_line(char s[], int max_length) {
    int c, i;

    for(i = 0; i < max_length - 1; ++i) {
        c = getchar();
        if(c == EOF) {
            break;
        }

        if(c == '\n') {
            break;
        }
        
        s[i] = c;
    }

    if(c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

int main(void) {
    int len;
    char line[MAX_LENGTH];

    while((len = get_line(line, MAX_LENGTH)) > 0) {
        printf("%s", line);
    }

    return 0;
}
