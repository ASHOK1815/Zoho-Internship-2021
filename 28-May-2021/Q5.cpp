//Consecutive Numbers

#include<bits/stdc++.h>
using namespace std;

bool cons(std::vector<int> arr) {
    int n=arr.size();
    std::sort(arr.begin(),arr.end());

    bool flag=true;

    for(int i=0;i<=n-2;i++)
    {
        cout<<arr[i]<<" "<<arr[i+1]<<endl;
        if(arr[i]!=(arr[i+1]-1))
        {
            flag=false;
            break;
        }

    }

    return flag;

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


    cout<<cons(arr);





}
