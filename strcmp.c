#include <stdio.h>

int main(void) {
int i,j,c=0,c1=0,c2=0;
char a[90],b[78];
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++)
{
	c++;
}
printf("%d\n",c);
for(i=0;b[i]!='\0';i++)
{
	c1++;
}
printf("%d\n",c1);
for(i=0;a[i]!='\0';i++)
{
for(j=0;b[j]!='\0';j++)

if(c==c1)
{
if(a[i]!=b[j])
c2++;
}
}
if(c2>=1)
{
	printf("yes");
}
else
{
printf("no");	
}

	return 0;
}
