#include <unistd.h>

void    ft_is_negative(int nb)  {
    nb = nb + 48;
    if (nb >= '0')  {
        write(1,"P",1);
    }
    else if (nb < '0')  {
        write(1,"N",1);
    }
}
/*
int main()  {
    ft_is_negative(-20);
    return 0;
}
*/