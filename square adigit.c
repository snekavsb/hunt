#include <stdio.h>

int main(void) {
	int n,a,mul=0,t;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		t=a*a;
		mul=mul+t;
		n=n/10;
	}
	printf("%d",mul);
	return 0;
}
