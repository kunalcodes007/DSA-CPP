#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[10];
int size;
cin>>size;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
int ans;
for(int i=0;i<size;i++){
ans=ans^arr[i];
}
cout<<ans;

    return 0;
}
   /*if(nums.empty()){
            return {};
        }
        
       vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0)
                ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]= -nums[abs(nums[i])-1];
        }
        return ans; */