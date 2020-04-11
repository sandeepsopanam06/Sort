#include<iostream>
using namespace std;
int main()
{
	int i,j,t,n,min,a[50];
	cout<<"Enter the number of elements\n";
	cin>>n;
	cout<<"Enter elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	cout<<"After sorting";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i];
	}
}
