#include "display.h"

void display(char *path) {

    FILE* fptr;

    fptr = fopen(path, "r");

    if (fptr == NULL) {
        printf("The file is not opened.");
        exit(2)
    }

}
