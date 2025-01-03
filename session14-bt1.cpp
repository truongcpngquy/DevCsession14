#include<stdio.h>
#include<string.h> 

int main(){
	
	char n[100];
	printf("nhap mot chuoi bat ki: ");
	scanf("%s",&n);
	printf("chuoi vua nhap la : %s\n",n); 
	printf("Do dai cua chuoi la: %d",strlen(n)); 
	
	return 0;
}
