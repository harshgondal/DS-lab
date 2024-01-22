#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_search(char *string, char *pattern, int s, int p) {
    int found = 0;
    int c=0;
    int i=0;
    for(; i < s - p + 1; i++) {
        int j=0;
        for (; j < p; j++) {
            c++;
            if (string[i + j] != pattern[j])
                break;
        }
        c++;
        if (j == p) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Found pattern at position: %d\nop count=%d", i+1, c);
    else
        printf("Could not find the pattern\nopcount = %d",c);
    
}

int main() {
    char string[100];
    scanf("%s", string);
    char pattern[100];
    scanf("%s", pattern);
 
    string_search(string, pattern, strlen(string), strlen(pattern));
 
    return 0;
}