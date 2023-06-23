#include <stdio.h>
#include <math.h>

int main (){
	int a,b,c,t;
	float x1,x2,x0,delta;
	printf ("Nhap vao gia tri a, b, c: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a==0){
		printf ("Nhap lai a!: ");
		scanf("%d",&t);
	}
	delta = pow(b,2) -4*a*c;
	if(delta > 0){
		printf ("PT co hai nghiem phan biet x1 x2;");
		x1 = 	(-b+ sqrt(delta))/2*a;
		x2 = (-b- sqrt(delta))/2*a;
		printf ("\nx1: %f",x1);
		printf ("\nx2: %f",x2);
	}
	else{
		if(delta ==0 ){
			printf ("PT co nghiem kep: ");
			x0= -b/2*a;
			printf ("\nx0 = %f",x0);
		}
		else{
			printf("PT Vo nghiem");
		}
	}
}
