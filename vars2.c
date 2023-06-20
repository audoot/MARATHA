
#include<stdio.h>

void main() {

	int t = 100;
	int a1;

	float t1 = 2.3;
	float t2 = 3.6;
	float t3 = 2.1;
	float tttt;

	printf("\n Enter value for a1 :");
	scanf("%d", &a1);
	
	printf("\n Enter value for tttt : ");
	scanf("%f", &tttt);

	printf("\n value for a = %d", a1);
	printf("\n value for a1 = %d", a1);
	printf("\n value for t1 = %f", t1);
	printf("\n value for t2 = %f", t2);
	printf("\n value for t2 = %f", t3);
	printf("\n value for tttt + t1 + t2 + t3 = %f", tttt+t1+t2+t3);
}
