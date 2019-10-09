#include <cmath> 
#include <iomanip> 
#include <iostream>

using namespace std;

int main()
{
	int q;
	cin>>q;
	int a[q];
	int c[q];
	for(int i=0;i<q;i++)
	{
		cin>>a[i];
		c[i]=0;
		int b[a[i]];
		for(int j=0;j<a[i];j++)
		{
			cin>>b[j];
			c[i]=c[i]+b[j];
		else
		{
			cout<<c[i]/a[i]+1<<endl;
		}
	}
	//the code is now optimised
}
