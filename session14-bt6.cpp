#include<stdio.h>
#include<string.h>
#define MAX 100 

int main(){
	char str[MAX]="TruongCongQuy0102006";
	int chuCai=0; 
	for(int i=0;i<strlen(str);i++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
		chuCai++;
		}
	}
	printf("So ki tu la chu cai trong chuoi la: %d",chuCai);
	
	return 0; 
} 
