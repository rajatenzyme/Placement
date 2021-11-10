

// Quick Sort

#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h){
    int i = l, j = h;
    int pivot = a[l];
    while (i<j) {
            while (a[i] <= pivot && i<j)
                i++;
            while (a[j] > pivot && i<=j)
                j--;
            if (i<j)
                swap(a[i],a[j]);
        }
    swap(a[l], a[j]);
    return j;
    
}

void QuickSort(int a[], int l, int h){
    if(l<h){
        int pivot = partition(a, l, h);
        QuickSort(a, l, pivot-1);
        QuickSort(a, pivot + 1, h);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5, 37, 89, 28, 39}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    QuickSort(arr, 0, n - 1); 
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}


// Insertion Sort

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n){

    for(int i=1;i<n;i++){
        int key = a[i];
        int j = i-1;

        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5, 37, 89, 28, 39}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    insertion_sort(arr, n); 
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}


// Merge Sort

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int L[n1], R[n2];
    for(int i=0;i<n1;i++)
        L[i] = a[l+i];
    for(int i=0;i<n2;i++)
        R[i] = a[mid+1+i];
    
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }

    while(i<n1)
        a[k++] = L[i++];
    while(j<n2)
        a[k++] = R[j++]; 
}

void mergeSort(int a[], int l, int r){
    if(l<r){
        int mid = (l + r)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5, 37, 89, 28, 39}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    mergeSort(arr, 0, n-1); 
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}



