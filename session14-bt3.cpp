#include <stdio.h>
#include <string.h>
#define MAX 100 

int main() {
    char str[MAX]="hello", newStr[MAX];
    int length;

    printf("Chuoi ban dau: %s\n",str);
    
    length = strlen(str);

   for (int i = length - 1; i >= 0; i--) {
       newStr[length - 1 - i] = str[i];  
    }
    printf("Dao nguoc thanh cong: %s\n",newStr);

    return 0;
}
