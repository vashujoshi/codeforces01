#include <iostream>
using namespace std;

int leftmost(int arr[], int size, int key) {
    int si = 0, ei = size - 1;
    int mid = si + (ei - si) / 2;
    int ans = -1;
    while (si <= ei) {

        if (arr[mid] == key) {
            ans = mid;
            ei = mid - 1;
        } else if (arr[mid] > key) {
            ei = mid - 1;
        } else if(arr[mid]<key){
            si = mid + 1;
        }
        mid=si+(ei-si)/2;
    }
    return ans;
}

int rightmost(int arr[], int size, int key) {
    int si = 0, ei = size - 1;
    int ans = -1;
    while (si <= ei) {
        int mid = si + (ei - si) / 2;

        if (arr[mid] == key) {
            ans = mid;
            si = mid + 1;
        } else if (arr[mid] > key) {
            ei = mid - 1;
        } else {
            si = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr1[8] = {0, 1, 2, 3, 4, 5,5,7};
    int left = leftmost(arr1,8,5);
    int right = rightmost(arr1, 8,5);

    
        cout << "Index of leftmost occurrence is " << left << endl;
       cout << "Index of rightmost occurrence is " << right << endl;
    
        cout << "Key not found in the array." << endl;
    

    return 0;
}
