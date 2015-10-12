#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int n;
	   scanf("%d",&n);
	   int arr[n] ; 
	   int hash[n] ;
	    
int i ;
	   for(i=0;i<n;i++)
	    {scanf("%d",&arr[i]); hash[i]=1;}
       long long int sum =1;
	    for(i=n-2;i>=0;i--)
	    {
	       if(arr[i]<=arr[i+1]) hash[i] +=hash[i+1] ;

	       sum+= hash[i];
	    } 
        /*for(i=0;i<n;i++) cout<< hash[i] << " " ;
        	cout<< endl;*/
	    printf("%lld\n",sum);
	}
}