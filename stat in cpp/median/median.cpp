#include<iostream>
using namespace std;
float x[500],limit,temp,m;
int i,j,med;
class median
{
	public:
		void individual()
		{
			std::cout<<"Enter the limit of x : ";
			std::cin>>limit;
			std::cout<<"\nEnter the x values : ";
			std::cout<<"\n";
			for(i=0;i<limit;i++)
			{
				std::cin>>x[i];
			}
			for(i=0;i<limit;i++)
			{
				for(j=i+1;j<limit;j++)
				{
					if(x[i]>x[j])
					{
					
					temp=x[i];
					x[i]=x[j];
					x[j]=temp;
		     		}
			}    }
		
		std::cout<<"\nsoln :- ";
		std::cout<<"\nArrange the data in ascending order ";
		for(i=0;i<limit;i++)
		{
			std::cout<<'\t'<<x[i];
		}
		std::cout<<"\nHere n= "<<limit;
		med=(limit+1)/2;
		std::cout<<"\nFormula : m= size of(n+1)/2 th item";
		std::cout<<"\n= size of("<<limit<<"+1)/2 th item";
		std::cout<<"\n= size of("<<limit+1<<"/2) th item";
		std::cout<<"\n= size of "<<med<<"th item";
		for(i=0;i<med;i++)
		{
		
	        m=x[i];	
	    }
	    std::cout<<"\n\nMedian = "<<m;
	    cout<<"\n\n";
	  }
};
int main()
{
	median ob;
	int option;
	std::cout<<"MEDIAN- "<<"\n\n"<<"1.Individual"<<"\n"<<"2.Discrete"<<"\n"<<"3.Continuous";
	std::cout<<"\n\nEnter what data to perform : ";
	std::cin>>option;
	switch(option)
	{
		case 1 : ob.individual(); break;
    }
}
