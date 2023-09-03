// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findCount(int arr[], int length, int num, int diff){
    
   int count = 0;
   for( int i=0;i<length;i++){
       
       if(abs(arr[i]-num) <= diff){
           count++;
       }
   }
   return count > 0? count : -1;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }
  int num;
  cin >> num;
  int diff;
  cin >> diff;
  cout << findCount (arr, n, num, diff);
}
