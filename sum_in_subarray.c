#include<stdio.h>

void main()
{
	
	int i,s,t,n,j,r,a[50],z,b[20][20],u;
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	j=0;
	while(j<n)
	{
		printf("enter %d=",j+1);
		scanf("%d",&a[j]);
		j++;
	}
	
	i=1;
	z=0;				
	while(i<=n)
	{
		j=0;
		while(j<n-1)
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			r=0;
			while(r<n)
			{
				s=0;
				while(s<r+1)
				{
					b[z][s]=a[s];
					s++;
				}
				z++;
				printf("\n");
				r++;
			}
			j++;
		}
		 i++;
	}
	u=z;
	
	z=0;
	while(z<u)
	{
		s=0;
		while(s<z+1)
		{
			t=0;
			while(t<u)
			{
				if(b[z][s]==b[t][s])
				{
					
				}
				t++;
			}
			s++;
		}
		z++;
	}
	
	getch();

}
