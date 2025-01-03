#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str[MAX] = "hello word";  
    int i = 0, n = 0, m = 0;

    while (str[i] != '\0') { 
        if (str[i] == ' ') {  
            m = 0;  
        } else if (m == 0) {  
            n++;  
            m = 1;  
        }
        i++;  
    }
    printf("So tu trong chuoi la: %d tu\n", n);

    return 0;
}
