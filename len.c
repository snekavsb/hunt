#include <stdio.h>

int main(void) {
	char a[90];
	int i,c=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("%d\n",c);
	
	return 0;
}
