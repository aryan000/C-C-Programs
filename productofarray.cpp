#include<bits/stdc++.h>
using namespace std;

vector <int> productExceptSelf(vector <int> &nums)
{
	vector <int> left , right;
	 left.push_back(1);
	 int mul = 1; int i ;
	  for(i=1;i<nums.size();i++)
	  {
	     left.push_back(mul*nums[i-1]);
	     mul *= nums[i-1];
	  } 

	   mul = 1; right.push_back(1);
	  for(i=nums.size()-2;i>=0;i--)
	 { right.push_back(mul*nums[i+1]); mul *= nums[i+1];}
     
      int j = nums.size()-1;

	  for(i=0;i<nums.size();i++,j--)
	   {
	   	nums[i] = left[i]*right[j];
           cout<< " left" << left[i] << " and right : " << right[j] << " and prod : " << nums[i] << endl;
	   }

	   return nums;
}




int main()
{
	 vector<int > nums ;
	  int n , i;
	  cout<<" enter  n : ";
	  cin>> n;

	  int temp;

	  for(i=0;i<n;i++)
	   {
	    cin>> temp ;
	    nums.push_back(temp);
	   } 


	   vector <int> ans ;
	   ans = productExceptSelf(nums) ;
	   for(i=0;i<ans.size();i++)
	    cout<< ans[i] << " ";

}