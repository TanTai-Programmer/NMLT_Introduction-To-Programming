#include <stdio.h>
#include <conio.h>
int main (){
	int s;
	printf("Input seconds: ");
	scanf("%d",&s);
	int H,M,S;
	H = s/3600;
	int min = s - H*3600;
	M = min/60;
	int second = s -(H*3600 + M*60);
	S = second;
	printf("H:M:S - %d:%d:%d",H,M,S);
}
