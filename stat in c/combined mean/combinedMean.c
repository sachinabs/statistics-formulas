#include<stdio.h>

int nArr[500],xArr[500],nx[500];
int i,n;
float ans,sumn,sumnx ;
void main()
{
	printf("Enter the Number of observation for N:\n");
	scanf("%d",&n);
	printf("Enter the value of N:\n");
		for(i=0;i<n;i++)
		{
		scanf("%d",&nArr[i]);
		}
		printf("Enter the value of X:\n");
		for(i=0;i<n;i++)
		{	
			scanf("%d",&xArr[i]);
		}
		for(i=0;i<n;i++)
		{
			nx[i]=nArr[i]*xArr[i];	
		}
		for(i=0;i<n;i++)
		{
			sumnx=sumnx+nx[i];
		}
		for(i=0;i<n;i++)
		{
			sumn=sumn+nArr[i];
		}
		ans=sumnx/sumn;
		printf("Combined mean : %f",ans);
}
