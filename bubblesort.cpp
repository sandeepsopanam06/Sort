#include<iostream>
using namespace std;
int main()
{
	int i,j,n,t,a[50];
	cout<<"Enter the number of elements\n";
	cin>>n;
	cout<<"The elements are\n";
	for(i=0;i<n;i++)

	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	cout<<"After sorting";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i];
		
	}
}
