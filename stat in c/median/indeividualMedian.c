#include<stdio.h>
float data[500];
float m;
int i,j,a,fn,n;
void main()
{
	printf("Enter the number Observation:\n");
	scanf("%d",&n);
	printf("Enter the Data:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&data[i]);
	}
			 for (i=0; i<n; ++i)
			 {
			   for (j=i+1; j<n; ++j)
			   	{
			     if (data[i] > data[j])
			     {
			       a= data[i];
			       data[i] = data[j];
			       data[j] = a;
			       
			     }
			   }
	 		}

	if(n%2==!0)
	{
		fn=(n+1)/2;
		fn--;
		printf("The median is : %f",data[fn]);
	}
	else
	{
		fn=(n+1)/2;
		fn--;
		m=(data[fn]+data[fn+1])/2;
		printf("%f --- %f\n",data[fn],data[fn+1]);
		printf("The median is : %f",m);
	}
}
 


