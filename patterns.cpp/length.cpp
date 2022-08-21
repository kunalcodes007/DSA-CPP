
//LENGTH OF STRING WITHOUT INBUILT FUNCTION
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    char name[20];
    cin>>name;
    for(int i=0 ; name[i]!='\0';i++){
        count++;
    }
    cout<<count;
}