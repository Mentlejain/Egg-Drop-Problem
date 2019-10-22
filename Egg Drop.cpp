#include<iostream>
#include<conio.h>
using namespace std;
int k;
int N;
int c=0;
int steps=0;
bool broken(int f)
{
	if(f<=c)
		return false;
	else
		return true;
}
int drop(int &n,int low,int up)
{
	if(low == up )
	{
		steps++;
		cout<<"Breaking at floor: "<<low;
		if(!broken(low))
		{
			cout<<" Not Broken"<<endl;
			return low+1;
		}
		else
		{
			cout<<" Broken"<<endl;
			return low;
		}
	}
	if(n==1)
	{
		for(int i=low;n>0 and i<=up;i++)
		{
			//cout<<"Lowest floor: "<<low<<" Highest floor: "<<up<<" ";
			cout<<"Dropping from floor: "<<i;
			steps++;
			if(broken(i) and !broken(i-1))
			{
				cout<<" Broken"<<endl;
				n--;
				steps++;
				return i;
			}
			cout<<" Not Broken"<<endl;
		}
	}
	else if(n>=2)
	{
		//cout<<"Lowest floor: "<<low<<" Highest floor: "<<up<<" ";
		cout<<"Dropping from floor: "<<(low+up)/2;
		if(broken((low+up)/2))
		{
			cout<<" Broken"<<endl;
			n--;
			steps++;
			return drop(n,low,(low+up)/2-1);
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
	cout<<"Breaking floor is: "<<th<<endl;
	cout<<"Eggs remaining: "<<N<<endl;
	cout<<"Steps to determine critical floor: "<<steps<<endl;
	getch();
}
