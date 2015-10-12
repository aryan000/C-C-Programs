#include<bits/stdc++.h>
using namespace std;

int main()
{
	 string str;
	 getline(cin,str);

	 set<char> myarr;

	 for(int i = 0;i<str.size();i++)
	 {
	 	 myarr.insert(str[i]); 
	 	// cout<< " i is : " << i << endl;
	 } 

        string newstr;
        set<char> :: iterator it;
        it = myarr.begin();
        while(it!=myarr.end())
        {  
        	//cout<< " it is " << *it << endl; 
        	newstr = newstr + *it; 
        	it++;
        	  
        }
	 cout<<"the modified string is : " << newstr;

}