#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i =0;
        for(i=0;i<nums.size();i++)
         if(nums[i]!=i) return i;
         
        return nums.size();
    }
int main()
{
	 vector <int> nums;

	 int n;
	 cout<<" Enter the numbe  :" ;
	 cin>> n;
	 int i; int temp;
	 for(i=0;i<n;i++)
	  {
	  	cin>> temp;
	  	 nums.push_back(temp);
	  }
	 int var = missingNumber(nums);
	 cout<<" var is : " << var << endl;

}