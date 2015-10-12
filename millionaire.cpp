#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int n ;
	   scanf("%d",&n);
	   string str1 , str2;
	   cin>> str1 >> str2;

	   long long int w[n+1];
	   int i ;
	   for(i=0;i<n+1;i++) 
	   scanf("%lld",&w[i]); 

	   long long int sum = w[0],   count=0;

        
        for(i=0;i<n;i++)
        {
           if(str1[i]==str2[i]) count++; 
           sum = max(sum,w[count]); 

            
       }
       if(count==n) sum = w[n];

        printf("%lld\n",sum);









	}
}