#include<stdio.h>
int main(){
	char text[100];
	printf("Nhap vào mot chuoi bat ki: ");
    fgets(text,100,stdin);
    int size=strlen(text);
    printf("Chuoi ban vua nhap: %s\n",text);
    printf("Do dai chuoi la: %d",size);
	return 0;
}
