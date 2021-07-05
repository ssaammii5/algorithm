//Insertion Sort ascending (a to z)
//Time Complexity O(n^2)

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int A[], int n);

int main(void) {
    int Arr[100], n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    insertion_sort(Arr, n);

    for(int i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }
}

void insertion_sort(int A[], int n) {
    for(int i = 1; i < n; i++) {
        int temp = A[i];
        int j = i - 1;

        while(j >= 0 && A[j] > temp) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = temp;
    }
}
