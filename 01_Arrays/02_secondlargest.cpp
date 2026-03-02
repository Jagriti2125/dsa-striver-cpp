#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//brute
// int sl=-1;
//   sort(arr.begin(),arr.end());
//   int largest = arr[n-1];
//   for(int i=n-2;i>=0;i--){
//     if(arr[i]!=largest){
//         sl=arr[i];
//         break;
//     }
//   }
//   cout<<"sl: "<<sl<<endl; 
// tc: nlogn +n 
// sc: n

// better : in passes first pass get largest second pass slargest
    //  int largest;
    //  for(int i=0;i<n;i++){
    //     if(arr[i]>largest)
    //     largest=arr[i];
    //  }
    //  int slargest = -1;
    //  for (int i=0;i<n;i++){
    //     if(arr[i]>slargest && arr[i]!=largest)
    //     slargest=arr[i];
    //  }
    //  cout<<slargest;
    // tc = 2n 

    // optimal -- single pass tc=n sc =n
    int l=arr[0],sl=-1;
    for (int i=1;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]<l && arr[i]>sl){
            sl=arr[i];
        }
    }
    cout<<sl;

}