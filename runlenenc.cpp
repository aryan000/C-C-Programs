#include<bits/stdc++.h>
using namespace std;

char * fn( char *str)
{

   char *newstr = new char; char *p = newstr;
      int count;
	
   for(int i =0;str[i]!='\0';i++)
   {   char ch = str[i]; count =1; 
     *newstr = ch; 
cout<<" val  is : " << *newstr << " i is : " << i << endl;	 newstr++; 
      while(str[i+1]==ch) {count++; i++;}
	  
	  *newstr = (char)(count+'0');
	  cout<<" val 1 is : " << *newstr << " i is : " << i << endl;
     newstr++;
     
   } 
   *newstr = '\0'; 
   str = p;
   return p;


}







int main()
{
  char *str;
  str = (char *) malloc(sizeof(char)*50);
  cin>> str;
  
  char *ptr = fn(str);
  
  cout<< ptr << endl;
  cout<< str << endl;
  
  
  
  
  
  
  
}