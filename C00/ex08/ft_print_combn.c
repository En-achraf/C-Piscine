#include <unistd.h>

void ft_putchar(char c) {
    write(1,&c,1);
}

void    conferm(int nb, int i) {
    if(nb >= i) {
        while(nb >= i) {
            ft_putchar((i / 10) + 48);
            write(1," ",1);
            ft_putchar((i % 10) + 48);
            i++;
        }
        conferm(nb ,i);
    }
}
void    ft_print_combn(int n) {

    int i;
    i = 0;
    if((n == 0 || n <= 9))
        conferm(n ,i);
}

int main() {
    ft_print_combn(2);
}