#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[1024];
    FILE *fptr;
    fptr = fopen("argv[1]", "r");
    fgets(s, sizeof(s), fptr);
    printf("%s",s);    
}