#include <iostream>

using namespace std;

int Binary(int a[]){
   int Min =0, Max= 5,mid;
   int d;
   cout << "enter the value to be searched" << endl;
   cin >> d;
   while(Min <= Max){
        mid = round((Min+Max)/2);
        if(d == a[mid]){
            return mid;
        }else if(d < a[mid]){
            Max = mid-1;
        }else{
            Min = mid+1;
        }
   }

  return -1;

}

int main()
{
    int arr[6] = {12,23,34,45,56,67};

    cout << "the index of required number is "<< Binary(arr);

}
