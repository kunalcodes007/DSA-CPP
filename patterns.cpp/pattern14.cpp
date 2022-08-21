#include<bits/stdc++.h>
using namespace std;
int main()
{
char a='a';
for(int i=1;i<=4;i++){
    for(int j=1;j<=i;j++){

       char temp=a+i+j-2;
       cout<<temp;
       
    }
    cout<<endl;
}
    return 0;
}
