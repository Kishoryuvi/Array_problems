#include <iostream>
using namespace std;

 int linearSearch(int arr[], int n, int target){
  for(int i=0 ; i<=n; i++){
    if(arr[i]==target){
      return true;
    }
  }

  return false;  
}

int main(){
   int target = 8;
   int n;
   int arr[n]={3,5,7,8,0,9};
   linearSearch(arr,n,target);

}
