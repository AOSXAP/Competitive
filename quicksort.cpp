using namespace std;
#include <iostream>

void swap(int &a,int &b){
    int aux = a;
    a = b;
    b = aux;
}

int partition(int low,int high,int arr[]){
    int i = low-1;
    int pivot = arr[high];

    for(int j = low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void quickSort(int low , int high, int arr[]){
    if(low<high){
        int pi = partition(low, high ,arr);
        quickSort(low , pi-1,arr);
        quickSort(pi+1,high,arr);
    }
}

int main(){
    int n ;cin>>n;int v[n];

    for(int i = 0;i<n;i++)cin>>*(v+i);

    quickSort(0,n-1,v);

    for(int i = 0 ;i<n;i++)cout<<*(v+i)<<" ";
}