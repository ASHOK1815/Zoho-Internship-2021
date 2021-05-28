//Tweaking Letters
//Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array.

#include<bits/stdc++.h>8

using namespace std;


void tweakLetters(string &s,int ar[])
{
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        int value=s[i]+ar[i];
        s[i]=char(value);
    }


}

int main()
{

    string s;
    cin>>s;

    int n=s.size();
    int ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    tweakLetters(s,ar);
    cout<<s<<endl;
    return 0;
}
