#include <stdio.h>

int main (){
	char a;
	printf ("Nhap vao ky tu: ");
	scanf("%c",&a);
	if(a> 47 && a<58){
		printf ("This is a Number");
	}
	if(a>32 && a<47|| a>57&&a<65 || a>90 && a<97 || a>122 ){
		printf ("This is a Special charater");
	}
	if (a >64 && a>91 || a>96 &&a<124){
		printf ("This is a Letters");
	}
}
