//https://d...content-available-to-author-only...f.com/questions/9722/mstick-editorial
 
#include<bits/stdc++.h>
using namespace std;
 
int tree[700005];
int arr[1000000];
void build (int a , int b , int node)
{  
 
  if(a>b) return ;
 
   int mid  = (a+b)/2;	
  // cout<< " mid is " << mid << " a is " << a << " b is " << b  << " node is : " << node<< endl;
  // getch();
   if(a==b) {tree[node] = arr[a]; return ;}
   build(a,mid,node*2);
   build(mid+1,b,node*2 + 1);
 
 
     tree[node] = tree[node*2] +  tree[node*2 +1];
 
   return;
}
 
 
int query(int node , int a , int b , int i , int j )
{
 
	if(j<a || i> b) return 0;
	if(i<=a && j>=b) return tree[node];
	 int mid = (a+b)/2;
	return query(node*2,a , mid , i , j) + query(node*2 +1 , mid+1 , b , i , j);
 
 
 
}
 
 
 
int main()
{ 
 
  int n ,i; 
  cin>> n;
  for(i=0;i<n;i++)
   cin>> arr[i] ;
   build(0,n-1,1);
 
   int  q ;
   cin>> q;
   while(q--)
   {
	   int l  , r  , sum=0;
	   cin>> l >> r;
	   sum = query(1,0,n-1,l,r);
	   cout<< sum << endl;
   }
 
 
 
 
 
 
}