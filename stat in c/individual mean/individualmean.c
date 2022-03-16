#include<stdio.h>
//#include<conio.h>
int i,n,x,mean[500];
float sumx,xbar;
void main()
{
// clrscr();
 printf("Enter the numbers of Observations :\n");
 scanf("%d",&n);
 printf("Enter the Observations :\n");
 for(i=0;i<n;i++)
 {
	scanf("%d",&mean[i]);
 }
 for(i=0;i<n;i++)
 {
 sumx=sumx+mean[i];
 }
printf("sumation x= : %f",sumx);
xbar=sumx/n;
printf("\nxbar =  %f",xbar);
//getch();
}
