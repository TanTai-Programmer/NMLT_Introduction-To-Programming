#include <stdio.h>
#include <conio.h>

int main(){
	printf ("Nhap vao 10 so nguyen tu ban phim");
	int i,x,S=0;
	for (i=0;i<10;i++){
		scanf("%d",&x);
		S+=x;
	}
	printf ("Trung binh la: %f.4 ",float(S)/10);
}
