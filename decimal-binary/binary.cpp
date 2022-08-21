#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
int digit,i=0,ans=0;
cin>>n;
while(n != 0){
    digit= n & 1;
    ans=(digit*pow(10,i))+ans;
    n = n >> 1;
    i++;
}
cout<<ans;

}