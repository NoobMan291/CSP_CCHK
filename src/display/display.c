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
    fseek(fptr, 0, SEEK_SET);

    char *string = malloc(fsize + 1);
    fread(string, fsize, 1, fptr);
    string[fsize] = 0;

    
    while(1)
    {
        delay_print(string, fsize, 100);
    }

    fclose(fptr);
    free(string);
}

void delay_print(char* str, unsigned long fsize, unsigned int milliseconds)
{
    fwrite(str, sizeof(char), fsize, stdout);
    printf("\e[1;1H\e[2J");
    usleep(milliseconds);
}

