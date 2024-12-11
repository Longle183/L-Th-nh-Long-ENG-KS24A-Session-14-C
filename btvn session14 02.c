#include<stdio.h>
int main(){
	char text[]="Xin chao cac ban";
	printf("Chuoi da khai bao: %s\n",text);
	printf("Cac ky tu trong chuoi: \n");
	for (int i=0;i<strlen(text);i++){
        printf("%c ",text[i]);
    }
	return 0;
}
