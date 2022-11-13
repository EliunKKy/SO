
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int r;
    double a = atof(argv[1]);
    double b = atof(argv[3]);

    if (argc != 4)
    {   
        printf("Warning! Invalid number of arguments \n");
        return EXIT_FAILURE;
    }

    switch(*argv[2])
    {
        case '+':
            r = a + b;
            printf("%d\n", r);
            break;
        case '-':
            r = a - b;
            printf("%d\n", r);
            break;
        case 'x':
            r = a * b;
            printf("%d\n", r);
            break;
        case '/':
            r = a / b;
            printf("%d\n", r);
            break;
        case 'p':
            r = pow(a, b);
            printf("%d\n", r);
            break;
    }   

    return EXIT_SUCCESS;
}