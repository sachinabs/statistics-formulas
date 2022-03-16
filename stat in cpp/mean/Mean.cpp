#include<iostream>

using namespace std;
int x[500],y[500],i,f[500],fx[500];
float limit,sumx,sumf,sumfx,xbar,sumfm;
		
class mean
{
	public:
		
		void individual()
		{
			std::cout<<"\nEnter the limit of X : ";
			std::cin>>limit;
			std::cout<<"\nEnter X values  ";
			cout<<"\n";
			for(i=0;i<limit;i++)
			{
				std::cin>>x[i];
				
			}
			for(i=0;i<limit;i++)
			{
				sumx=sumx+x[i];
			}
			xbar=sumx/limit;
			cout<<"\nMean = ";
			for(i=0;i<=limit;i++)
			{
				if(i!=limit)
				{
				std::cout<<x[i]<<"+";
			    }
			    else if(i==limit)
			    {
			   	std::cout<<x[i];
				}
				
			}
			cout<<" / "<<limit<<" = "<<xbar;
			cout<<"\n\n";
			
		}
		void discrete()
		{
			std::cout<<"\nEnter the limit of X : ";
			cin>>limit;
			std::cout<<"\nEnter X values  ";
			std::cout<<"\n";
			for(i=0;i<limit;i++)
			{
				std::cin>>x[i];
			}
		
			std::cout<<"\nEnter the f values  ";
			std::cout<<"\n";
			for(i=0;i<limit;i++)
			{
				std::cin>>f[i];
			}
			for(i=0;i<limit;i++)
			{
				sumf=sumf+f[i];
			}
			for(i=0;i<limit;i++)
			{
				fx[i]=x[i]*f[i];
			}
			for(i=0;i<limit;i++)
			{
				sumfx=sumfx+fx[i];
			}
			xbar=sumfx/limit;
			std::cout<<"\n\nSoln:- ";
			std::cout<<"\n\nX       f       fx";
			for(i=0;i<limit;i++)
			{
				std::cout<<"\n"<<x[i]<<'\t'<<f[i]<<'\t'<<fx[i];
			}
			for(i=0;i<limit;i++)
			{
				fx[i]=x[i]*f[i];
			}
			cout<<"\n";
			cout<<"\nsummation f : "<<sumf;
			cout<<"\nsummation fx : "<<sumfx;
			xbar=sumfx/sumf;
			std::cout<<"\nMean = "<<sumfx<<" / "<<sumf<<" = "<<xbar;
			cout<<"\n\n";
				
     	}
		void continuous()
		{
			std::cout<<"\nEnter the limit of X : ";
			cin>>limit;
			std::cout<<"\nEnter X values  ";
			std::cout<<"\n";
			for(i=0;i<limit;i++)
			{
				std::cout<<"\nFrom : ";
				std::cin>>x[i];
				std::cout<<"To   : ";
				std::cin>>y[i];
		    }
		    std::cout<<"\nEnter the f values  ";
		    std::cout<<"\n";
			for(i=0;i<limit;i++)
			{
				std::cin>>f[i];
			}
			for(i=0;i<limit;i++)
			{
				sumf=sumf+f[i];
			}
			
			std::cout<<"\n\nSoln:- ";
			std::cout<<"\n\nX       f       m       fm";
			
			for(i=0;i<limit;i++)
			{
				std::cout<<"\n"<<x[i]<<"-"<<y[i]<<'\t'<<f[i]<<'\t'<<(x[i]+y[i])/2<<'\t'<<f[i]*(x[i]+y[i])/2;
			}
			for(i=0;i<limit;i++)
			{
				sumfm=sumfm+(f[i]*(x[i]+y[i])/2);
			}
			xbar=sumfm/sumf;
			std::cout<<"\nMean = "<<xbar;
			cout<<"\n\n";
		}
};
int main()
{
	mean ob;
	
	int option;
	std::cout<<"MEAN- "<<"\n\n"<<"1.Individual"<<"\n"<<"2.Discrete"<<"\n"<<"3.Continuous";
	std::cout<<"\n\nEnter what data to perform : ";
	std::cin>>option;
	switch(option)
	{
		case 1 : ob.individual(); break;
		case 2 : ob.discrete(); break;
		case 3 : ob.continuous(); break;
		default : std::cout<<"Option Invalid !";
	}
	
}
