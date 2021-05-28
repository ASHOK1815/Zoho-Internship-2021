//Making a Box


//Create a function that creates a box based on dimension
#include<bits/stdc++.h>
using namespace std;

std::vector<std::string> makeBox(int n) {
	std::vector<std::string> res;

    for(int i=1;i<=n;i++)
    {
        std::string temp="";
        if(i==1 || i==n){
            for(int j=1;j<=n;j++)
            {
                temp+="#";
            }
        }
        else{
            for(int j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                {
                    temp+="#";
                }
                else{
                    temp+=" ";
                }
            }

        }
            res.push_back(temp);
    }


    return res;

}

int main(){

    vector<string> re=makeBox(1);
    for(int i=0;i<re.size();i++)
    {
        cout<<re[i]<<endl;
    }


}
