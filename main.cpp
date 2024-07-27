#include <iostream>

using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid =start + (end-start)/2;
    }
    return -1;
}

int main() {
    int even[6]={2,3,4,6,7,8};
    int odd[5]={2,4,5,7,8};

    int result = binarySearch(even,6,8);

    cout<<"index of 8 is " <<result <<endl;

    int result2 = binarySearch(odd,5,4);

    cout<<"index of 4 is " <<result2 <<endl;

    return 0;
}
