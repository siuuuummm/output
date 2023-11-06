#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

#define PRINT_ERROR fprintf(stderr,					\
			    "%s:%d: Errore %d \"%s\"\n",		\
			    __FILE__, __LINE__, errno, strerror(errno));

int main(int argc, char * argv[]) {
    int n, i = 0;
    if(argc < 2) {
        PRINT_ERROR;
        exit(EXIT_FAILURE);
    }
    FILE *my_file = fopen("kids.txt", "w");

    if(my_file == NULL) {
        PRINT_ERROR;
        exit(EXIT_FAILURE);
    } 

    while(i < n) {
        fork();
        __pid_t getpid(void);
        i++;
    }

    fclose(my_file);
}