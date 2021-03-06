#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> &arr, int r, int l, int key);

// driver code
int main() {
    vector<int> arr { 1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    int n = arr.size();
    int key, index;
    cout<<"Enter the values you want to seach for: ";
    cin>>key;
    index = binarySearch(arr, 0, n, key);
    cout<<"Value found at position: "<<index+1;
    return 0;
}

// Recursive Solution
int binarySearch(vector<int> &arr, int l, int r, int key) {
    int mid = (int)(l + r)/2;
    if (l > r) {
        cout<<"Value isn't present in given array";
        return -1;
    }
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key) 
        return binarySearch(arr, l, mid-1, key);
    return binarySearch(arr, mid+1, r, key);
}

// O(log(n)) time complexity
// O(1) space complexity
