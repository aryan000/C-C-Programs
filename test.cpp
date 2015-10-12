#include<bits/stdc++.h>
using namespace std;
typedef long long ll;	
 

int main()
{
 int t;
 cin>> t;
 while(t--)
 {
  int n;
  cin>> n; 
   bool found =0; ll x = 9;
  set <ll> myarr ; myarr.insert(9);
  set <ll> :: iterator it;
  ll temp =x;
  while(found!=1 )
  {   it = myarr.begin();
    	 //temp = myarr.front(); 
		 
		 temp = *it; 
		 myarr.erase(it);
        //if(!myarr.empty()) 		 myarr.pop();
	 if(temp%n==0) { found =1; break;}
	 myarr.insert(temp*10);
	 myarr.insert(temp*10+9);  
	  
  } 
  
  cout<< temp << endl;
  
  }}