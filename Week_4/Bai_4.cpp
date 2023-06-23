#include <stdio.h>

int main (){
	int x,y;
	printf ("Nhap vao toa do cua diem (x;y): ");
	scanf("%d%d",&x,&y);
	if (x>0 && y>0){
		printf ("Nam goc phan tu thu nhat");
	}	
	if (x<0&& y>0){
		printf ("Nam goc phan tu thu hai");
	}
	if(x<0 && y<0){
		printf("Nam goc phan tu thu ba");
	}
	if(x>0 &&y<0)
	{
		printf("Nam goc phan tu thu tu");
	}
}
