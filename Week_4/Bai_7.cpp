#include <stdio.h>

int main(){
	int a,b,c;
	printf ("Nhap vao 3 canh cua tam giac");
	scanf("%d%d%d",&a,&b,&c);
	if (a + b > c && b + c > a && c + a > b) {
		if (a == b && a==c){
			printf ("Equiateral Traingle");
		}
		else if (a==b || a==c || b==c){
			printf ("Isosceles Triangle");
		}
		else {
			printf ("Scalene Triangle");
		}
	}
	else {
		printf ("3 canh khong tao thanh tam giac");
	}
}

