#include <bits/stdc++.h>

using namespace std;

void addN(int v[],int &n){
    if(v[n-1]>9){
        int c = v[n-1]/10; int r = v[n-1]%10;n++;
        v[n-1] = c; v[n-2] = r;
    }
}

void multiply(int v[],int &n,int m){
    for(int i = 0; i<n;i++){
        v[i] *= m;
    }

    addN(v, n);

    for(int i = 0 ; i<n-1;i++){
        if(v[i]>9){
            int c = v[i]/10; int r = v[i]%10;
            v[i] = r;
            v[i+1]+=c;
        }
    }

    addN(v, n);
}

void extraLongFactorials(int n) {
    int k=1 ;cin>>n;int v[1000];
    v[0] = 1;
    for(int i = 2;i<=n;i++){
        multiply(v,k,i);
    }
    for(int i = k-1; i>=0;i--)cout<<v[i];
}


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
