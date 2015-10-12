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
	   a = a - float(hour);

	   str = str + char(hour+'0') + ":";

	  minute = int(a)*2;
	  str = str+ char(minute+'0');
	  cout<< str << endl;



      

	}
}