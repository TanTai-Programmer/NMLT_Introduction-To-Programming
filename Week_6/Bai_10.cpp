#include <stdio.h>

int main (){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=2;j<=10;j++)
		{
			printf ("|%d x %d = %d|",j,i,j*i);
	}
	printf("\n");
	}
	
}
