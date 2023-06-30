#include <stdio.h>
#include <math.h>

int main (){
	int n,i,j,x,s;
	printf("Input the starting range or number: ");
	scanf("%d",&i);
	printf ("Input the end range or number: ");
	scanf("%d",&j);
	for(n=i;n<=j;n++){
		s=0;
		for(x=1;x<n;x++){
			if(n%x==0){
				s+=x;
			}
		}
		if(s==n){
			printf ("%d ",s);
		}
		}
	}

