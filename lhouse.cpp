#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>> n;
	int arr[n] , temp[n];
	int i ;
	for(i=0;i<n;i++)
	cin>> arr[i];
	 temp[n-1] = 0;
	for(i=n-2;i>=0;i++)
      {
        temp[i] = max(temp[i+1],arr[i+1]);
      } 

     for(i=0;i<n;i++)
     cout<< temp[i] << " " ;

}