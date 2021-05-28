//Find the Odd Integer
//Create a function that takes an array and finds the integer which appears an odd number of times.

#include<bits/stdc++.h>
using namespace std;



int findOdd(vector<int> arr) {

	map<int,int>m;
	int n=arr.size();
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
	}
	int ans=-1;
	for(auto x:m)
	{
		if(x.second%2!=0 && x.first>ans)
		{
			ans=x.first;
		}
	}

	return ans;


}

int main()
{

  int n;
  cin>>n;

  vector<int>arr;
  for(int i=0;i<n;i++)
  {
     int a;
     cin>>a;

     arr.push_back(a);


  }



   cout<<findOdd(arr);



}
