# include<iostream>
using namespace std;
int main()
{
	int n,a[100];
	cin>>n;int s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
		
	}
for(int i=0;i<n;i++)
  {
  	for(int j=i+1;j<n;j++)
  	{
  	   if(a[i]<a[j])
		 {
		 	int temp=a[i];
		 	a[i]=a[j];
		 	a[j]=temp;
			 }	
	}
  }
  
  int ctr=0;
  int s1=0;
  for(int i=0;i<n;i++)
  {
  	s1=s1+a[i];
  	s=s-a[i];
  	ctr++;
  	if(s1>s)
  	break;
  }
  cout<<ctr;
  return 0;
}
