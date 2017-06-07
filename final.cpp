#include<iostream>
using namespace std;
long long int i,j,n,q,code,k,m,maximum;
 long long int arr[100000],qry[100000],arr1[100000],qry1[100000],arr2[100000],qry2[100000];
int max( long long int  arri[])
{
	long long int i,temp,n=5;
	temp=0;
	for(i=0;i<n;i++)
	{
		if(temp<arri[i])
		{
			temp=arri[i];
			m=i;
			
		}
	}
	return temp;
}
int shobha(long long int arr[],long long int qry[])
{
	cout<<"SHOBHA"<<endl;
	for(i=0;i<q;i++)
	{
		code=1;
	    for(j=0;j<n;j++)
	    {
	    	
		
	        if(qry[i]<=arr[j])
	        {
	          arr[j]=arr[j]-qry[i];
	          for(k=0;k<n;k++)
	          {
	          	cout<<arr[k];
			  }
			  cout<<endl;
	          j=n+1;
	         
	          code=0;
	        }
		
	   }
	   
	   if(code!=0)
	   {
	   	cout<<"-1"<<endl;
	   }
	}
}
int kamal(long long int arr[],long long int qry[])
{
	cout<<"KAMAL"<<endl;
	for(i=0;i<q;i++)
	{
		maximum=100000;;
		code=1;
		for(j=0;j<n;j++)
		{
			if(qry[i]<=arr[j]&&arr[j]<maximum)
			{
				maximum=arr[j];
				m=j;
				code=0;
			}
		}
			if(code!=0)
	   {
	   	cout<<"-1"<<endl;
	   }
	   else{
		arr[m]=arr[m]-qry[i];
		for(k=0;k<n;k++)
		{
			cout<<arr[k]; 
		}
		cout<<endl;
	}
  } 
}
int jasmine(long long int arr[],long long int qry[])
{
	    cout<<"JASMINE"<<endl;
		for(i=0;i<q;i++)
	{
		code=1;
	    	
	        if(qry[i]<=max(arr))
	        {
	          arr[m]=arr[m]-qry[i];
	          for(k=0;k<n;k++)
	          {
	          	cout<<arr[k];
			  }
			  cout<<endl;
	         
	          code=0;
	        }
		
	   
	   if(code!=0)
	   {
	   	cout<<"-1"<<endl;
	   }
	}
}
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>arr[i];
	arr1[i]=arr[i];
	arr2[i]=arr[i];
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
	cin>>qry[i];
	qry1[i]=qry[i];
	qry2[i]=qry[i];
	
	}
	

	shobha(arr,qry);
	kamal(arr1,qry1);
	jasmine(arr2,qry2);

}
