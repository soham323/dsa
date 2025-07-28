#include <iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,3,2,1,0};
    int start = 0 ;
    int end = 7;
    int mid  = start + (end -start) / 2;
    int peak = -1;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    peak = arr[start];
    cout << "\n The peak of mountain is on index " << end;
    cout << "\n The peak of mountain is " << peak;
    return 0;
}