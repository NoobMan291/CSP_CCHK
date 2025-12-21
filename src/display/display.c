#include "display.h"

void display(char *path) {

    FILE* fptr;

    fptr = fopen(path, "r");

    if (fptr == NULL) {
        printf("The file is not opened.");
        exit(2);
    }

    fseek(fptr, 0, SEEK_END);
    long fsize = ftell(fptr);
    char *string = malloc(fsize + 1);
    fread(string, fsize, 1, fptr);

    string[fsize] = 0;

    

    //while(1)
    //{
    printf("%s", string);
    //}

    fclose(fptr);
    free(string);
}
