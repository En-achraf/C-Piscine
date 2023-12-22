
void    ft_swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
int main(void) {
    int a = 5;
    int b = 1;
    printf("%d and %d\n",a, b);
    ft_swap(&a,&b);
    printf("%d and %d",a, b);
    return 0;
}
/*