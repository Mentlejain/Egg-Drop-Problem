#include<iostream>
#include<conio.h>
#include<math.h>
#include<cstdlib>
int k;
int N;
int c=0;
int steps=0;
using namespace  std;
bool broken(int f)
{
	if(f<=c)
		return false;
	else
		return true;
}
int drop(int n,int low,int up)
{
	if(n==1)
	{
		for(int i=low+1;n>0 and i<up-1;i++)
		{
			cout<<"Dropping from floor: "<<i<<endl;
			steps++;
			if(broken(i))
			{
				cout<<" Broken";
				steps++;
				return i+1;
			}
			cout<<" Not Broken"<<endl;
		}
	}
	else if(n>=2)
	{
		cout<<"Dropping from floor: "<<(low+up)/2;
		if(broken((low+up)/2))
		{
			cout<<" Broken"<<endl;
			n--;
			steps++;
			return drop(n-1,low,(low+up)/2-1);
		}
		else
		{
			cout<<" Not Broken"<<endl;
			steps++;
			return drop(n,(low+up)/2+1,up);
		}
	}
}
int main()
{
	int th;
	cout<<"Enter the number of floors: ";
	cin>>k;
	cout<<"Enter the number of eggs: ";
	cin>>N;
	cout<<"Enter threshold floor: ";
	cin>>c;
	th=drop(N,1,k);
	cout<<"Threshold floor is: "<<th<<endl;
	cout<<"Steps to reach critical floor: "<<steps<<endl;
	
}
