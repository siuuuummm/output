#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    FILE * read;
    read = fopen("argv[1].txt", "r");
    FILE * write;
    write = fopen("argv[2].txt", "w");
    int c, count = 0;
    if(read == NULL) {
        perror("Impossibile aprire il file");
        return 1;
    }
    
    while((c = fgetc(read)) != EOF) {
        count++;
        fputc(rand(),write);
    }

    fclose(read);
    fclose(write);
}