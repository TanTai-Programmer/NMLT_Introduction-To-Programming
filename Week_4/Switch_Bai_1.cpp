#include <stdio.h>

int main (){
	char a;
	printf ("Nhap vao ky tu: ");
	scanf("%c",&a);
	switch (a) {
		case 'E':{
			printf ("Excellent");
			break;
		}
		case 'V':{
			printf ("Very Good");
			break;
		}
		case 'G':{
			printf ("Good");
			break;
		}
		case 'A':{
			printf ("Average");
			break;
		}
		case 'F':{
			printf ("Fail");
			break;
		}
	}
}
