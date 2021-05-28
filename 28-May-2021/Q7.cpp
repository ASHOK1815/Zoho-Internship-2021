//Letters Shared Between Two Words

//Create a function that returns the number of characters shared between two words.

#include<bits/stdc++.h>
using namespace std;


int sharedLetters(std::string str1, std::string str2) {

     std::map<char,int>m1;
	 std::map<char,int>m2;

	for(int i=0;i<str1.size();i++)
    {
        m1[str1[i]]++;
    }

    for(int i=0;i<str2.size();i++)
    {
        m2[str2[i]]++;
    }

    int counter=0;
    for(auto x:m1)
    {
        if(m2.find(x.first)!=m2.end())
        {
            counter++;
        }
    }

    return counter;
}

int main()
{

    string s1,s2;
    cin>>s1>>s2;

    cout<<sharedLetters(s1,s2);




}
