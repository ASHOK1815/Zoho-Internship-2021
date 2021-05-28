//Uno (Part 1)

//This question is inspired by the popular Uno card game.
//
//Write a function that takes in two arguments: (1) a player's current hand and (2)
//the current face-up card on the table. The function will return true if the player can make a play, or false if the player has to draw from the deck.
//
//A player can make a play if either:
//
//They have a card that is the same color as the face-up card.
//They have a card that is the same number as the face-up card

#include<bits/stdc++.h>
using namespace std;

bool canPlay(std::vector<std::string> hand, std::string face)
{

    std::map<std::string,std::string>m;
	for(int i=0;i<hand.size();i++)
   {
       std::string s1=hand[i];
       bool flag=true;
       std::string value1="";
       std::string value2="";
       for(int j=0;j<s1.size();j++)
       {
           if(flag)
           {
               if(s1[j]==' ')
               {
                   flag=false;
                   continue;
               }
               value1+=s1[j];

           }
           else
           {
              value2+=s1[j];
           }


       }

         m[value1]=1;
		   		m[value2]=1;


   }

	 std::string check1="";
	 std::string check2="";
	 bool flag=true;
	 for(int i=0;i<face.size();i++)
	 {
		   if(flag)
			 {
				  if(face[i]==' ')
					{
						flag=false;
						continue;
					}
				 else
				 {
					 check1+=face[i];
				 }
			 }
		   else
			 {
				 check2+=face[i];
			 }

	 }
   if(m.find(check1)!=m.end() || m.find(check2)!=m.end() )
	 {
		  return true;
	 }
   else
	 {
		 return false;
	 }

}

int main()
{
    std::vector<string>ans;
    int n;
    cin>>n;
    cin>>ws;
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        ans.push_back(s);

    }



     string s1;
     cin>>s1;

     cout<<canPlay(ans,s1);


}


