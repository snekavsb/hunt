#include <stdio.h>

int main(void) {
	int n,b,m=0,t;
	scanf("%d",&n);
	while(n!=0)
	{
		b=n%10;
		t=b*b;
		m=m+t;
		n=n/10;
	}
	printf("%d",m);
	return 0;
}
