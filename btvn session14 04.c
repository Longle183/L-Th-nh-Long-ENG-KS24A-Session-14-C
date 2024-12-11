#include<stdio.h>
int main(){
	char text[100],kiTu;
	int count=0;
	printf("Nhap vao chuoi: ");
    fgets(text,100,stdin);
    printf("Nhap vao ky tu can tim: ");
    scanf("%c",&kiTu);
    for (int i=0;i<strlen(text);i++){
        if(text[i]==kiTu){
            count++;
        }
    }
    printf("Ký tu '%c' xuat hien %d lan trong chuoi.\n",kiTu,count);
	return 0;
}
