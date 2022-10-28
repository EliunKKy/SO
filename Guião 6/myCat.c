#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man fopen
 man fgets
*/

#define LINEMAXSIZE 100 /* or other suitable maximum line size */


int main(int argc, char *argv[])
{
    FILE *fp = NULL;
    char line [LINEMAXSIZE]; 

    /* Validate number of arguments */
    if( argc < 2 )
    {
        printf("USAGE: %s fileName\n", argv[0]);
        return EXIT_FAILURE;
    }
    
    /* Open the file provided as argument */
    for (int i = 1; 1 < argc; i++)
    {
        errno = 0;
        fp = fopen(argv[i], "r");
        if( fp == NULL )
        {
            perror ("Error opening file!");
            return EXIT_FAILURE;
        }

        if ( i != argc)
        {
            printf("\nFile %s: \n\n", argv[i]);
        }
        
        /* Read all the lines of the file */
        int c = 1;
        int flag = 1;
        while( fgets(line, sizeof(line), fp) != NULL )
        {
            if (flag) printf("%d-> ", c);
            printf("%s", line); /* not needed to add '\n' to printf because fgets will read the '\n' that ends each line in the file */

            if ( line[strlen(line)-1] != '\n')
                flag = 0;
            else
                flag = 1;

            c++;
        }
    }
        

    fclose(fp);

    return EXIT_SUCCESS;
}
