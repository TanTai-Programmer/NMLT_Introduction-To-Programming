#include <stdio.h>
#include <conio.h>

int main(){
	int n,i;
	printf ("Nhap vao mot so nguyen tu ban phim: ");
	scanf("%d",&n);
	for(i=1;i<11;i++){
		printf ("%d x %d = %d\n",n,i,n*i);
	}
	
}
