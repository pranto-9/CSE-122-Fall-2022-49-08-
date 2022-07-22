// Codeforces Problem No - 231A
// Problem Name : Team


#include<iostream>
using namespace std;

int main(){

    int a,b,c, test_case, increment=0;
    cin>>test_case;
    while(test_case--)
    {
        cin>>a>>b>>c;
        if((a==1 & b==1)||(b==1 & c==1)||(a==1 & c==1))
            increment++;
    }
    cout<<increment<<endl;

    return 0;
}
