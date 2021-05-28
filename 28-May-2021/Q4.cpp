//Letter Distance
#include<bits/stdc++.h>
using namespace std;

int letterDistance(std::string str1, std::string str2) {

	int n=str1.length();
	int m=str2.length();

	int k=min(n,m);

	int result=0;
	for(int i=0;i<k;i++)
    {
        result+=abs(str1[i]-str2[i]);

    }

	result+=abs(n-m);

	return result;

}


int main()
{

    string s1,s2;
    cin>>s1>>s2;



    cout<<letterDistance(s1,s2)<<endl;



    return 0;
}
