#include <stdio.h>

int main (){
	int a, b,c;
	printf ("Nhap vao 2 so a va b: ");
	scanf("%d%d",&a,&b);
	if (b==0){
		printf ("Nhap lai b!: ");
		scanf("%d",&c);
		b=c;
	}
	if(a%b==0){
		printf("b la uoc so cua a");
	}
	else{
		printf("b khong la uoc so cua a");
	}
}
