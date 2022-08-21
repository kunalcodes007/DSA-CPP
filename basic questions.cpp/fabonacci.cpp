#include<iostream>
using namespace std;

int main()
{

int first=0,second=1;

int n;
cin>>n;
cout<<first<<' '<<second<<' ';
for(int i=0;i<n;i++){

int third=first+second;
cout<<third;
first=second;
second=third;

}
    return 0;
}