#include<bits/stdc++.h>
using namespace std;

int main(){

int rows;
cin>>rows;

for(int i=1;i<=rows;i++)
{
    for(int j=1;j<=3;j++){
char ch='a'+i+j-2; 
//just anyhow wanted 'a'//
          cout<<ch;
    }
    cout<<endl;
}


 return 0;
}
//abc
//bcd
//cde