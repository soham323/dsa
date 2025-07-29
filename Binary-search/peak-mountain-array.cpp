#include <iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,3,2,1,0};
    int start = 0 ;
    int end = 7;
    int mid  = start + (end -start) / 2;
    int peak = -1;
    while(start<end){
        cout << "Start: " << start << " End: " << end << " Mid: " << mid << endl;
        if(arr[mid]<arr[mid+1]){
            cout << "Mid is less than next element, moving start to mid + 1" << endl;
            start = mid + 1;
        }
        else {
            cout << "Mid is greater than or equal to next element, moving end to mid" << endl;
            end = mid;
        }
        cout << "New Start: " << start << " New End: " << end << endl;
        mid = start + (end - start) / 2;
    }
    peak = arr[start];
    cout << "\n The peak of mountain is on index " << end;
    cout << "\n The peak of mountain is " << peak;
    return 0;
}