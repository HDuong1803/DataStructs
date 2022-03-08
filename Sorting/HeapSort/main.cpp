#include <iostream>

using namespace std;

void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}


void heapify(int A[], int size, int lastNode){
        int l = 2 * lastNode + 1;
        int r = 2 * lastNode + 2;
        int largest=lastNode;

            if(l<size && A[l] > A[largest])
             largest = l;

            if(r<size && A[r] > A[largest])
            largest = r;

            if(A[largest] != A[lastNode]){
            swap(&A[largest], &A[lastNode]);
            heapify(A, size, largest);
            }
    }

void heapSort(int A[], int n){
    for(int i=n/2 - 1; i>=0; i--)
        heapify(A, n, i);

    for(int i=n-1; i>=0; i--){
        swap(A[0], A[i]);
        heapify(A, n , 0);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<endl;
}

int main()
{
    int arr[] = {12, 119, 13, 5, 123, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);

    return 0;
}
