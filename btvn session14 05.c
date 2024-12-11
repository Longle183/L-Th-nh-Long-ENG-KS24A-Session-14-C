#include<stdio.h>
int main(){
	char text[100];
    int count = 1;
    printf("Nhap vao chuoi: ");
    fgets(text,100,stdin);
    for (int i=0;i<strlen(text);i++){
    	if(text[i]==' '){
            count++;
        }
    }
    printf("So tu trong chuoi: %d\n",count);
	return 0;
}
