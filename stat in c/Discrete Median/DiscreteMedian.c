#include<stdio.h>

	int i,j,a,obs;
	int xarr[500],farr[500];

void main()
{
	printf("Median for Discrete Series\n");
	printf("Enter the number of Observations:\n");
	scanf("%d",&obs);
	printf("Enter the value of X:\n");
	for(i=0;i<obs;i++)
	{
		scanf("%d",&xarr[i]);
	}
	printf("Enter the value of F:\n");
	for(i=0;i<obs;i++)
	{
		scanf("%d",&farr[i]);
	}
	
	//assending order
	
	 for (i=0; i<obs; ++i)
			 {
			   for (j=i+1; j<obs; ++j)
			   	{
			     if (xarr[i] > xarr[j])
			     {
			       a= xarr[i];
			       xarr[i] = xarr[j];
			       xarr[j] = a;
			       
			     }
			   }
	 		}
	
	for(i=0;i<obs;i++)
	{
		printf("%d\n",xarr[i]);
	}
	
	
}
