#include <bits/stdc++.h>
using namespace std;
int main(){
      int n;  // variable declare
      cin >> n; // size of array

       vector<int> arr(n);// create vector of size n
      for(int i=0;i<n;i++){
         cin>>arr[i]; //input elements
      }

    //   sort(arr.begin(),arr.end()); // asc
    //   // sort(arr.begin(),arr.end(),greater<int>()); //desc

    //  cout<<"largest number : "<<arr[n-1]<<endl;
    // tc o(n logn) sc o(n)

    //put largest in a[0] compare to next and swap if greater
     int largest=arr[0];
     for(int i=1;i<n;i++){
        if(arr[i]>largest)
        swap(arr[i],largest);
     }
     cout<<"largest number : "<<largest<<endl;

    return 0;
}
