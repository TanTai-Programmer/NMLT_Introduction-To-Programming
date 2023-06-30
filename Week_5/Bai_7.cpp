#include <stdio.h>
#include <math.h>
int main (){
	int n,m,x,y,z,i;
	printf ("Nhap vao 2 so nguyen n tu ban phim: ");
	scanf("%d%d",&n,&m);
	x=abs(n);
	y=abs(m);
	if(x>y){
		z=y;
	}
	if(y>=x){
		z=x;
	}
	for (i = z;i>0;i--){
		if(x%i==0 && y%i==0){
			printf ("Uoc chung lon nhat la: %d",i);
			break;
		}
	}
}

