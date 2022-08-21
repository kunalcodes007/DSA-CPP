
//LOWERCASE AND UPPER CASE SENSITIVE PALINDROME

#include<bits/stdc++.h>
using namespace std;

char tolowercase(char a){

if(a>= 'a' && a<= 'z'){
    return a;
}
else
{
    char temp=a-'A'+'a';
    return temp;
}

}

bool check(char a[],int n)
{
int s=0,e=n-1;
while(s<=e){
if(tolowercase(a[s])!=tolowercase(a[e])){
    return 0;
}
else
{
    s++;
    e--;
}
return 1;
}}

int main()
{
    char name[100];
    cin>>name;
    int length=strlen(name);
    cout<<"palidrome or not:"<<check(name,length);

}