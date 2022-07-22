// Codeforces Problem No - 50A
// Problem Name - Domino Piling

#include<iostream>
using namespace std;
int main()
{

    int M,N,ans ;
    cin>>M>>N ;

    if(M>=1 && N<=16)
    {
        ans=(M*N)/2 ;
    }
    cout<<ans<<endl ;

}
