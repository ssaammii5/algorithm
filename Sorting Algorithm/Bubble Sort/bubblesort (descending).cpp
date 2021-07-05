//Time Complexity O(n^2)
//Bubble Sort in descending order(z to a)

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int A[], int n);

int main(void)
{
    int Arr[100], n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    bubble_sort(Arr, n);

    for(int i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }
}

void bubble_sort(int A[], int n)
{
    int i, j;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(A[j] < A[j + 1]) {		//working for descending
                swap(A[j], A[j + 1]);
            }
        }
    }
}


