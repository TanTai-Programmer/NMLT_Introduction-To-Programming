//#include <stdio.h>
//
//int main (){
//	int mark;
//	int reward;
//	printf("Your mark: ");
//	scanf("%d",&mark);
//	reward = mark >8? 500000 : 0;
//	printf("Reward: %d\n",reward);
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
//int main(){
//	int mark;
//	printf("Your mark: ");
//	scanf("%d",&mark);
//	(mark>8)? printf ("500000") : printf ("0");
//	getchar(); getchar();
//	return 0;
//}
#include <stdio.h>

int main(){
	int mark;
	printf("Your mark: ");
	scanf("%d",&mark);
	printf (mark >8? "500000" : "0");
	getchar(); getchar();
	return 0;
}
