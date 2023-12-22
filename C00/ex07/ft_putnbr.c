#include <unistd.h>

void ft_putchar(char c) {
    write(1,&c,1);
}

void    ft_putnbr(int nb) {

    if(nb < 0){
        nb = -nb;
        ft_putchar('-');
        ft_putnbr(nb);
    }
    else if(nb >= 0){
        if ((nb == 0 || nb <=9)){
            ft_putchar(nb + 48);
        }
        else if(nb > 9){
            ft_putnbr(nb / 10);
            ft_putnbr(nb % 10);
        }
    }
}
/*
int main(void) {
    ft_putnbr(0);
    return 0;
}
*/