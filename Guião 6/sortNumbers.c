#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man qsort
*/
#define LINEMAXSIZE 100 /* or other suitable maximum line size */
#define MAX_SIZE 100


int compareInts(const void *px1, const void *px2)
{
    int x1 = *((int *)px1);
    int x2 = *((int *)px2);
    return(x1 < x2 ? -1 : x1 == x2 ? 0 : 1);
}

int main(int argc, char *argv[])
{
    int i, numSize;
    int numbers[MAX_SIZE];

    //numSize = argc - 1;

    /* Memory allocation for all the numbers in the arguments */
    //numbers = (int *) malloc(sizeof(int) * numSize);

    FILE *fp = NULL;
    char line [LINEMAXSIZE]; 

    errno = 0;
    fp = fopen(argv[1], "r");
    if( fp == NULL )
    {
        perror ("Error opening file!");
        return EXIT_FAILURE;
    }

    int c = 0;
    while( fgets(line, sizeof(line), fp) != NULL )
        {
            /* Storing the arguments in the "array" numbers */
            int x = atoi(line);
            numbers[c] = x;
            c++;
        }

    numSize = c;    

    for(int j = numSize - 1; j >= 0; j--)
        {

        }

    /* void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *)); 
    The qsort() function sorts an array with nmemb elements of size size.*/
    qsort(numbers, numSize, sizeof(int), compareInts);

    /* Printing the sorted numbers */
    printf("Sorted numbers: \n");
    for(i = 0 ; i < numSize ; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return EXIT_SUCCESS;
}


 /* Storing the arguments in the "array" numbers */
            /*for(i = 0 ; i < numSize ; i++)
            {
                numbers[i] = atoi(argv[i+1]);
            }

            //void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *)); 
               //The qsort() function sorts an array with nmemb elements of size size.
            //qsort(numbers, numSize, sizeof(int), compareInts);
            //if (flag) printf("%d-> ", c);
            //printf("%s", line);  not needed to add '\n' to printf because fgets will read the '\n' that ends each line in the file */

            //if ( line[strlen(line)-1] != '\n')
            //    flag = 0;
            //else
            //    flag = 1;

            //c++;*/