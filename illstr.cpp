#include<bits/stdc++.h>
using namespace std;

int main()
{
 int x;
 cin>> x;
  string s ;
  cin>> s;
  int v =0 , w = 0 ;
  register int i =0;
  for(i=0;i<x;i++)
  { //cout<<" s of i is " << s[i] << endl;
  if(s[i]=='v') v++;
    if(s[i]=='w') w++;
	 
 
 }
  
 int len = x - (v+w ) ;
  
 int a = len + v + 2*w ;
 
 int b;
 if( v%2!=0) { b = len + v/2 + 1 + w;}
  else b = len + v/2 + w;
 
  
  cout<< min(a,b)<< " " << max(a,b);
 
 
 
 
 
 
 
 }