//7)Array Write a program to cyclically rotate an array by one.
#include <iostream>
using namespace std;

int main() {
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int last = arr[n - 1];
for (int i = n - 1; i > 0; i--)
arr[i] = arr[i - 1];
arr[0] = last;
for (int x : arr) cout << x << " ";
}

