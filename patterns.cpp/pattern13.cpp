#include<bits/stdc++.h>
using namespace std;
int main()
{

int rows;
cin>>rows;

char ch='a';

for(int i=1;i<=rows;i++){

    for(int j=0;j<i;j++){

char temp=ch+i-1;
       cout<<temp;
    }
    cout<<endl;
}


    return 0;
}