#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[20];
    cin>>name;
    int length=strlen(name);
    for(int i=length-1;i>=0;i--){
        cout<<name[i];
    }
}