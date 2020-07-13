#include <stdio.h>


void main()
{
	int a,b,c,d;
	printf("\nACCEPT VALUE FOR a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	d=sum(a,b,c);
	printf("\nSUM OF %d+%d+%d is %d",a,b,c,d);
	getch();
}
sum(int x,int y,int z)
{
	int temp;
	temp=x+y+z;
	return(temp);
}
