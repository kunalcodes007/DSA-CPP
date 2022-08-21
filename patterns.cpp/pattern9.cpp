#include<bits/stdc++.h>
using namespace std;
int main()
{
int rows;
cin>>rows;

for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
        cout<<(i-j+1);
    }
    cout<<endl;
}
}
//PRINT 1
//21
//321
//4321