#include <stdio.h>
# include<math.h>

int main(void) {
	int n,a,s=0,b=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
	b=b+(a*pow(16,s));
	
	n=n/10;
	s++;
		}
		printf("%d\n",b);
	
	return 0;
}
