//#include <stdio.h>

int ft_strlen(char *str) {

int i;

i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return(i);
}
/*
int main() {
    char *a = "achraf";
    printf("%d", ft_strlen(a));
    return 0;
}
*/