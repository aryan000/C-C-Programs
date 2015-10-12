#include<bits/stdc++.h>
using namespace std;


int main()
{
short t;
cin>> t;
while(t--)
{
 int n;
 cin>> n;
 int arr[n][500] ;
  pair <int , int> hash[n*n +1];
 
 
 int i,j; int temp;
 for(i=0;i<n;i++)
   for (j=0;j<n;j++)
   { cin>> arr[i][j];
      
	 hash[arr[i][j]] = make_pair(i,j); 
	  
	  
	  
   
   } 
  long long  sum =0; int row = hash[1].first; int col = hash[1].second; int temp1 , temp2;
   for(i=2;i<=n*n;i++)
   {
	   
	  // cout<< " i is : " << i << " at " << hash[i].first << " and " << hash[i].second << endl;	
	   temp1 = hash[i].first;
	    temp2 = hash[i].second;
		sum += abs(row-temp1) + abs(col-temp2);
		row = temp1;
		col = temp2;
		//cout<< temp1 << temp2 << endl;
	   //cout<<" sum is : "<< sum << endl;
	   
   }
     
   cout<< sum << endl;
	 
	 
	 
	 
	 
	 
 }}