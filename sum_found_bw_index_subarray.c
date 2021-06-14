#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,j,n;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter no %d=",i+1);
		scanf("%lld",&a[i]);
	}
	printf("enter sum =");
	scanf("%d",&s);

	for(i=0;i<n;i++)
	{
		t=a[i];
		for(j=i+1;j<n;j++)
		{
			t=t+a[j];
			if(t==s)
			{
				printf("sum found b/w index %d and %d",i,j);
				break;
			}
		}
	}
	
	getch();
}	
