#include<bits/stdc++.h>
using namespace std;

int main(){

int digit,ans=0,i=0;
int binary;
cin>>binary;
while(binary!=0){
digit=binary % 10;
if(digit==1){
ans=ans+pow(2,i);

}
binary = binary/10;
i++;
}
cout<<ans;

    return 0;
} 