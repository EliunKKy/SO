#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int ret;

    printf("Antes do fork: PID = %d, PPID = %d\n", getpid(), getppid());
    if ((ret = fork()) < 0) { 
        perror("erro na duplicação do processo");
        return EXIT_FAILURE;
    }
    if (ret > 0) {
        sleep(1);
        printf("PAI\n");
        printf("Quem sou eu?\nApós o fork: PID = %d, PPID = %d, retorno do fork = %d\n",getpid(), getppid(), ret);
    } else{
        printf("FILHO\n");
        printf("Quem sou eu?\nApós o fork: PID = %d, PPID = %d, retorno do fork = %d\n",getpid(), getppid(), ret);
    }

    return EXIT_SUCCESS;
}

// b) O PPID do processo filho é o PID do processo pai.
// O retorno dos forks também é diferente nos dois processos,
// no processo pai é o PID do filho e no processo filho é 0.