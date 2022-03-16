#include<stdio.h>
int srange[500],erange[500],f[500],m[500],sfm[500],y[500],x[500];
int i,limit;
float xbar,sumf,sumfm;
void main()
{
	//user inputs
	printf("Enter the Number of Observations:\n");
	scanf("%d",&limit);
	printf("Enter the Ranges:\n");
		for(i=0;i<limit;i++)
		{
				scanf("%d" "%d",&srange[i],&erange[i]);
		}
	printf("Enter the f:\n");
		for(i=0;i<limit;i++)
		{
				scanf("%d",&f[i]);
		}	
	
		for(i=0;i<limit;i++)
		{
				sumf=sumf+f[i];
		}
	
		for(i=0;i<limit;i++)
		{
		m[i]=(srange[i]+erange[i])/2;
		}
	
	
		for(i=0;i<limit;i++)
		{
			sfm[i]=f[i]*m[i];
		}
		for(i=0;i<limit;i++)
		{
			sumfm=sumfm+sfm[i];
		}
		

	printf("\n\nSoln:- ");
    printf("\n\nX       f       m       fm");
			
			for(i=0;i<limit;i++)
			{
				sumfm=sumfm+(f[i]*(x[i]+y[i])/2);
			}
			for(i=0;i<limit;i++)
			{
				printf("\n%d",srange[i]);
				printf("-");
				printf("%d",erange[i]);
				printf("\t%d\t",f[i]);
				printf("%d\t",m[i]);
				printf("%d\t",sfm[i]);
			}
			
			xbar=sumfm/sumf;
	xbar=sumfm/sumf;
	printf("\n\nXbar = %f",xbar);
	
	
}
