// // Codeforces Problem No - 71A
// Problem Name : Way Too Long Words

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int length, t;
    char word[100];
    cin>>t;
    while(t--)
    {
        cin>>word;
        length = strlen(word);
        if(length>10)
        {
            cout<<word[0]<<length-2<<word[length-1]<<endl;
        }
        else
            cout<<word<<endl;
    }

    return 0;
}
