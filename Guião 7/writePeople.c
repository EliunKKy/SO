#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define MAXLENNAME 60

typedef struct
{
    int age;
    double height;
    char name[64];
} Person;

void printPersonInfo(Person *p)
{
    printf("Person: %s, %d, %f\n", p->name, p->age, p->height);
}

int main (int argc, char *argv[])
{
    FILE *fp = NULL;
    int i, np;
    Person p;

    /* Validate number of arguments */
    if(argc != 2)
    {
        printf("USAGE: %s fileName\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Number of persons: ");
    scanf("%d", &np);
    printf("\n");

    /* Open the file provided as argument */
    errno = 0;
    fp = fopen(argv[1], "wb");
    if(fp == NULL)
    {
        perror ("Error opening file!");
        return EXIT_FAILURE;
    }

  
    /* Write 10 itens on a file */
    for(i = 0 ; i < np ; i++)
    {    
        printf("Name: ");
        fgets(p.name, MAXLENNAME+1, stdin);
        printf("Age: ");
        scanf("%d", &(p.age));
        printf("Height: ");
        scanf("%lf", &(p.height));
        fwrite(&p, sizeof(Person), 1, fp);
        printf("\n");
    }

    fclose(fp);

    return EXIT_SUCCESS;
}
