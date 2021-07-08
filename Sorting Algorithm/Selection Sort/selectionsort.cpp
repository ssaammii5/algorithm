//Selection Sort
//Time Complexity O(n^2)

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int A[], int n);

int main(void) {
    int n, Arr[100];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    selection_sort(Arr, n);

    for(int i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }

    return 0;
}

void selection_sort(int A[], int n) {
    int min;

    for(int i = 0; i < n - 1; i++) {
        min = i;

        for(int j = i + 1; j < n; j++) {
            if(A[j] < A[min]) {
                min = j;
            }
        }

        if(i != min) {
            swap(A[i], A[min]);
        }
    }
}
