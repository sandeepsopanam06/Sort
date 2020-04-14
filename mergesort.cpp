	#include<iostream>
	using namespace std;
	void Merge(int A[] ,int start,int mid,int end)
	{
		int i,j,k;
		int n1=mid-start+1;
		int n2=end-mid;
		int L[50] , R[50];
		for(i=0;i<n1;i++)
		{
		L[i]=A[start +i];
		}
		for (j=0;j<n2;j++)
		{
		R[j]=A[mid+j+1];
		}
		i=0;j=0;
		for(k=start;i<n1&& j<n2;k++)
		{
			if (L[i] <R[j])
			{
				A[k]=L[i++];
			}
			else
			{
				A[k]=R[j++];
			}
		}
		while(i<n1)
		{
			A[k++]=L[i++];
		}
		while(j<n2)
		{
			A[k++]=R[j++];
		}
	}
	void Merge_sort(int A[],int start,int end)
	{
		int mid;
		if(start <end)
		{
			mid=(start +end)/2;
			Merge_sort(A,start,mid);
			Merge_sort(A,mid+1,end);
			Merge(A,start,mid,end);
		}
	}
	int main()
	{
		int n,A[50];
		cout<<"Enter the size\n";
		cin>>n;
		cout<<"Enter array elements\n";
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		Merge_sort(A,0,n-1);
		cout<<"After sorting\n";
		for(int i=0;i<n;i++)
		{
			cout<<A[i]<<"";
			cout<<endl;
		}
	
	}
