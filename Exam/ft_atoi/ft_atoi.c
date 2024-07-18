int	ft_atoi(const char *str) {
    int i = 0;
    int sign = 1;
    int num = 0;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+') {
        if(str[i] == '-')
            sign *= -1;
        i++; 
    }
    while (str[i] >= '0' && str[i] <= '9') {
        num = (num * 10) + (str[i] - 48);
        i++;
    }
    return (sign * num);
}