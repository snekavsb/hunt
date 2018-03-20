#include <stdio.h>

int main(void) {
int n,a,b=0;
scanf("%d\n",&n);
while(n!=0)
{
a=n%10;
if(a%2!=0)
{
	b=b+a;
}
n=n/10;
}
printf("%d\n",b);
if(b%2==0)
{
	printf("E");
}
else
{
	printf("O");
}
	return 0;
}
