#include<stdio.h>
/*
1
**
111
****
11111
*/
int main() {
	int r,c;
	printf("For Loop\n");
	for(r=0;r<5;r++) {
		for(c=0;c<=r;c++) {
			r%2==0?printf("1"):printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Do While Loop\n");
	r=0;
	
	do {
		c=0;
		do {
			r%2==0?printf("1"):printf("*");
			c++;
		}while(c<=r);
		printf("\n");
		r++;
	}while(r<5);
	return 0;
}

