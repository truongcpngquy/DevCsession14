#include<stdio.h>
#include<string.h>
#define MAX 100 

int main() {
    char str[MAX]="TruongCongQuy", ch;
    int n = 0; 
    printf("Nhap ki tu can dem: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            n++;
        }
    }

    printf("ki tu %c xuat hien %d lan trong chuoi\n", ch, n);

    return 0;
}
