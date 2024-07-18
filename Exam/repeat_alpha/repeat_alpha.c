#include <unistd.h>
void ft_putchar(char a) {
    write(1,&a,1);
}

int main(int ac, char **av) {
    int i = 0;
    int j;
    if(ac == 2) {
        while (av[1][i]) {
            if (av[1][i] >= 'a' && av[1][i] <= 'z') {
                j = av[1][i];
                while(j >= 'a') {
                    ft_putchar(av[1][i]);
                    j--;
                }
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z') {
                j = av[1][i];
                while(j >= 'A') {
                    ft_putchar(av[1][i]);
                    j--;
                }
            }
            else {
                ft_putchar(av[1][i]);
            }
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}