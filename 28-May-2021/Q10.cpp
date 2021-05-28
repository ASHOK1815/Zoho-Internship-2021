//How Many "Prime Numbers" Are There?


//Create a function that finds how many prime numbers there are, up to the given integer

#include<bits/stdc++.h>
using namespace std;

int primeNumbers(int num) {

	std::vector<int>primearray(num+1,0);

	primearray[0]=1;
	primearray[1]=1;

	for(int i=2;i*i<=num;i++)
    {
        if(primearray[i]==0)
        {

            for(int j=i*i;j<=num;j+=i)
            {
                primearray[j]=1;
            }

        }

    }

    int counter=0;
    for(int i=0;i<num;i++)
    {
        if(primearray[i]==0)
        {
            counter++;
        }
    }

	return counter;

}

int main()
{


    int n;
    cin>>n;

    cout<<primeNumbers(n);
















}
