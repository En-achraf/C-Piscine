#include <unistd.h>

int main(int ac ,char **av) {
    int i = 0;
    if(ac == 4) {
        while(av[1][i]) {
            if(av[2][1] == 1 && av[3][1] == 1)
                break;
            if(av[1][i] == av[2][i]) {
                av[1][i] = av[3][i];
            }
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}