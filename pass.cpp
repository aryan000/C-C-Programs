 #include<bits/stdc++.h>
using namespace std;

int fn(int **arr,int ** state, int i , int j , int n )
{
	if(i>=n) return 0;
     if(state[i][j]!=0) return state[i][j];
	 state[i][j] = arr[i][j] + max(fn(arr,state, i+1,j,n), fn(arr,state,i+1,j+1,n));
     return state[i][j] ;	
}

int main()
{
	 int n;
	 scanf("%d",&n);
	 while(n--)
	 {
	 	int row; 
	 	 scanf("%d",&row);
	 	int **arr = new int*[row]; 
	 	int **state = new int*[row];
	 	int i;
	 	 
	 	for(i=0;i<row;i++)
	 		{   state[i] = new int[i+1] ;
	 	arr[i] = new int[i+1];}
int j;
	 	for(i=0;i<row;i++)
	 		 for(j=0;j<=i;j++)
	 		 	{ cin>> arr[i][j];
	 		 		state[i][j] = 0;}

 

	 		 	printf("%d\n",fn(arr,state,0,0,row));
	 }
}