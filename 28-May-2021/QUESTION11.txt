//Find the First Non-Repeated Character

//Create a function that accepts a string as an argument and returns the first non-repeated character.



#include<bits/stdc++.h>
using namespace std;

std::string firstNonRepeatedCharacter(std::string str) {
	  if(str.size()==0)
    {

        return "Invalid";
    }
	std::map<char,int>m;

    std::vector<char>v;


    for(int i=0;i<str.size();i++)
    {
        v.push_back(str[i]);
        m[str[i]]++;

    }


    for(int i=0;i<v.size();i++)
    {
        if(m[v[i]]==1)
        {
            std::string ans;
            ans=v[i];

            return ans;

        }

    }


	return "Invalid";

}

int main()
{

    string str;
    getline(cin,str);

    string ans=firstNonRepeatedCharacter(str);
    cout<<ans<<endl;

}
