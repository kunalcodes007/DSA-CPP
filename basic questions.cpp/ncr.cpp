
  #include<bits/stdc++.h>
  using namespace std;


  int fact(int n){
 int ans=1;
while(n!=1){
    ans=n*ans;
    n--;
}return ans;

  }

int program(int n, int r){

int ans=fact(n)/(fact(r)*fact(n-r));
return ans;

}
  int main(){
int n,r;
cin>>n;
cin>>r;
cout<<"ncr is:"<<' '<<program(n,r);

    return 0;
  }