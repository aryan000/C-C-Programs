#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  short n;
  cin>> n;
  short score[n] , mul[n];
  register int i;
  for(i=0;i<n;i++)
  {
    cin>> score[i] >> mul[i];
	}
   pair <int,int> fscore[n];
   
   for(i=0;i<n;i++)
   {
      fscore[i] = make_pair(score[i]*mul[i],i);
  }
  
  sort(fscore,fscore+n);
  
  for(i=0;i<n;i++)
	  cout<< fscore[i].first << " at " << fscore[i].second << endl;
}