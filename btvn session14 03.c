#include<stdio.h>
int main(){
	char text[]="Xin chao cac ban";
	int length=strlen(text);
	printf("Chuoi khai bao la: %s\n",text);
	printf("Chuoi dao nguoc la: ");
	for (int i=length-1;i>=0;i--){
        printf("%c",text[i]);
    }
	return 0;
}
