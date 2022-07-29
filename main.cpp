#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()

{
    int n,acounter=0,bcounter=0;
    string input;
    bool no=false;
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>input;
        for(int j=0;j<input.length();j++)
        {
            if(input[j]=='A')
                acounter++;
            if(input[j]=='B')
                bcounter++;
            if(bcounter>acounter)
                no=true;
        }
    }
    if(bcounter<1||input[input.size()-1]=='A')
        no=true;

    if(no)
        cout <<"No"<<endl;

    else
        cout<<"YES"<<endl;

    no=false;
    bcounter=0;
    acounter=0;

}