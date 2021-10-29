#include <iostream>
using namespace std;

int binarySearch(int arr[], int findNo, int startIndex, int endIndex)
{
  if(endIndex < startIndex) {
    return -1;
  }
  int mid = (startIndex+endIndex)/2;
  if(arr[mid] > findNo) {
    binarySearch(arr, findNo, startIndex, mid-1);
  }
  else if(arr[mid] < findNo) {
    binarySearch(arr, findNo, mid+1, endIndex);
  }
  else if(arr[mid] == findNo) {
    return mid;
  }
}

int main()
{
  int arr[] = {1, 5, 6, 7, 9, 14, 20};
  int len = sizeof(arr)/sizeof(arr[0]);
  int foundIndex = binarySearch(arr, 1, 0, len-1);
  cout << "No. found at index " << foundIndex << endl;
  return 0;
}