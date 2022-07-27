/*
*
22
###
4444
@@@@@
*/
#include<stdio.h>

int main() {
	int r,c;
	
	printf("For Loop\n");
	for(r=0;r<5;r++) {
		for(c=0;c<=r;c++) {
			r%2==0?r==0?printf("*"):r==2?printf("#"):printf("@"):printf("%d",r+1);
		}
		printf("\n");
	}
	return 0;
}
