#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[10];
int value;
cout<<"the value you want to initialize in an array"<<endl;
cin>>value;

for(int i=0;i<10;i++){
  arr[i]=value;
}

for(int i=0;i<10;i++){
    cout<<arr[i];
    cout<<endl;
}

    return 0;
}