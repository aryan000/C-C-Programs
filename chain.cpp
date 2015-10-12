 #include<bits/stdc++.h>
 using namespace std;
typedef long long ll;
 
 int main()
 {
	   int t;
	  scanf("%d",&t);
	  while(t--)
	  {
		   ll m , n;
		    scanf("%lld%lld",&n,&m);
		  int arr[m];
		   int i; 
		  for(i=0;i<m;i++)
		   scanf("%d",&arr[i]);
 
		  if(m==1) { printf("0\n"); continue;}
 
		 sort(arr,arr+m);
		 ll ans =0; register int j = m-1;
		 for(i=0;i<=j;i++)
		 {  
            if(arr[i]<=(j-i)) 
			{ ans+= arr[i];
		       j -= arr[i];
			   }
            else {ans += j-i;  break;}
		 }  
 
		printf("%lld\n",ans);
 
 
 
 
 
 
 
	  }
 }