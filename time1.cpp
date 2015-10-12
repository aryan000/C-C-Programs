#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	  double a;
	  scanf("%lf",&a);

	  string str ="";

	  int hour , minute;
	  hour = int(a)/30;
	   a = a - float(hour*30);
       if(hour<10) str += "0";
	   str = str + char(hour+'0') + ":";

	  minute = int(a)*2; 
	  if(minute<10) str+= "0";
	  str = str+ char(minute+'0');
	  cout<< str << endl; 

	  string str2 ="";

	   
	  hour *= -1;
	  hour = hour + 12;
	 cout<< " latest is  " << hour <<  " and " << hour % 12 <<endl;
       if(hour<10) str2 += "0";
	   str2 = str2 + char(hour+'0') + ":";

      cout<< str2 << endl;

	  minute = int(a)*2;  
	  minute *= -1;
	  minute = minute + 60;
	  if(minute<10) str2+= "0";
	  str2 = str2 + char(minute+'0');
	  cout<< str2 << endl; 



      

	}
}