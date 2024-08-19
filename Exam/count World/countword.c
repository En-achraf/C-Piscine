#include <unistd.h>
//#include <stdio.h>


int countword(char *c) {
    int i;
    int count;
    int X;
    X = 0;
    i = 0;
    count = 0;
    while(c[i]) {
        if((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')) {
            if(X == 0) {
                count++;
                X = 1;
            }
        }
        else if(c[i] == ' ' || c[i] == '\t') {
            X = 0;
        }
        i++;
    }
    return (count);
}

/*int main() {
    printf("%d", countword("    hello i'am achraf enandiri how are you^ "));
    return 0;
}*/