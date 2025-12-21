#include "display/display.h"

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        fprintf(stderr, "The wrong number of parameters has been passed.");
        return 1;
    }

    display(argv[1]);

    return 0;
}
