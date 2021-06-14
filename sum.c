#include<stdio.h>

int sum(int  ,int );
void main()
{
	int n,m,t;
	
	printf("hello\nenter no.=");
	scanf("%d%d",&n,&m);
	t=sum(n,m);
	printf("%d",t);
	
	getch();
	
}

int sum(int x,int y)
{
	int s;
	s=x+y;
	return s;
}
