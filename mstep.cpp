#include<bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin>> t;
while(t--)
{
 int n;
 cin>> n;
 int arr[n][500] ;
 int hash1[n];
  memset(hash1,0,n); 
 int hash2[n] ;
 memset(hash2,0,n);
 
 
 int i,j; int temp;
 for(i=0;i<n;i++)
   for (j=0;j<n;j++)
    cin>> arr[i][j];
     


  for(i=0;i<n;i++)
	   for(j=0;j<n;j++) 
	   {
           cout<< arr[i][j] << " at i = " << i << " j = " << j << endl;
           temp = arr[i][j];
           hash1[temp] = i ;
           hash2[temp] = j;
          		   
		  cout<<" temp  : " << temp << " is stored at " << hash1[temp] << " and " << hash2[temp] << endl; 
		   
	   }
   
   for(i=1;i<=9;i++)
	   cout<<" i  : " << i << " is stored at " << hash1[i] << " and " << hash2[i] << endl; 
   
   
   
 
 
 }}