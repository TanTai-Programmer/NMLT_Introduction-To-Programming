#include <stdio.h>

int main (){
	int a,b,c,max,i;
	printf ("Nhap vao gia tri cua 3 so: ");
	scanf("%d%d%d",&a,&b,&c);
	max = a;
	i=1;
	if(a<b){
		max = b;
		i=2;
		if (b>c){
			max = b;
			i=2;
		}
		else{
			max=c;
			i=3;
		}
	}
	else{
		if(a>c){
			max = a;
			i=1;
		}
		else {
			max =c;
			i=3;
		}
	}
	printf ("The %drd Number is the greatest among three : %d",i,max);
}
