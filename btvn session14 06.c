#include<stdio.h>
int main(){
	char text[100];
    int count=0;
    printf("Nhap vao chuoi: ");
    fgets(text,100,stdin);
    for (int i=0;text[i]!='\0';i++){
         if((text[i])){          
        	 count++;
        }
 }
  printf("So chu cai trong chuoi: %d\n",count);
	return 0;
}
