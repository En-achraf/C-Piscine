#include <unistd.h>

int main(int ac, char **av) {
    int i = 0;
    int khaoula = 0;
    int arr[256] = {0};
    char *str1;
    char *str2;
    str1 = av[1];
    str2 = av[2];
    if(ac == 3) {
        while(str2[i]) 
        {
            khaoula = str2[i];
            if (arr[khaoula] == 0)
                arr[khaoula] = 1;
            i++;
        }
        i = 0;
        while(str1[i]) 
        {
            khaoula = str1[i];
            if (arr[khaoula] == 1)
            {
                write(1,&str1[i],1);
                arr[khaoula] = 0;
            }
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}