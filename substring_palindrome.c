#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,q;
	char a[50];
	printf("hello\nenter string=");
	gets(a);
	
	for(r=0;a[r]!='\0';r++);
	
	s=0;k=0;
	for(z=0;z<r;)
	{
		for(t=0;t<r && (t-s)==z ;)
		{
			q=s;
			for(i=t;i>=s;)
			{
				if(a[i]==a[q])
				{
					i--;
					q++;
				}
				else
				{
					break;
				}
			}
			if(q==t+1)
			{
				printf("(");
				for(i=t;i>=s;i--)
				{
					printf("%c",a[i]);
				}
				printf(")");
				k++;
			}
			printf(",");
			s=t;
		}	
		printf("\n");
	}
	printf("%d",k);
	getch();
}
