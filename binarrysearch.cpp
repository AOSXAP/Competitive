using namespace std;
#include <iostream>

int Search(int arr[],int low, int high,int target){
    while(low<high){
        int med = (low+high)/2;
        if(arr[med] == target) return med;
        if(target>arr[med]){low = med+1;}
        if(target<arr[med]){high = med-1;}
    }
}

int main(){
    int v[5] = {1, 7 ,8 ,12 ,15};
    int x = Search(v,0,5,15);
    cout<<x;
}