#include <stdio.h>

int main(){
	char a;
	printf ("Nhap vao ky tu: ");
	scanf("%c",&a);
	if(a == 65 || a ==97 || a == 69 || a== 101 || a==73 ||a ==105 ||a == 79 || a==111|| a==85 ||a==117){
		printf ("The alpabet is a vowels.");
	}
	else if (a >65 && a< 69 || a>69 && a < 73 || a>73 && a<79 || a>79 &&a<85 ||a >97 && a< 101 || a>105 && a < 111 || a>111 && a<117 || a>117 &&a<123 )
	{
		printf ("The alphabet is a consonant");
	}
	else {
		printf ("This is not a leter alphabet");
	}

}

