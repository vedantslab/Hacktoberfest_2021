#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> &arr, int r, int l, int key);

// driver code
int main() {
    vector<int> arr { 1, 2, 4, 6, 7, 8, 12, 45, 67 };
    int n = arr.size();
    int key, index;
    cout<<"Enter key: ";
    cin>>key;
    index = binarySearch(arr, 0, n, key);
    cout<<"Found at: "<<index+1;
    return 0;
}

int binarySearch(vector<int> &arr, int l, int r, int key) {
    int mid = (int)(l + r)/2;
    if (l > r) {
        cout<<"Not Found";
        return -1;
    }
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key) 
        return binarySearch(arr, l, mid-1, key);
    return binarySearch(arr, mid+1, r, key);
}
