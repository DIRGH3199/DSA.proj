#include<bits/stdc++.h>
using namespace std;

int main(){                         //Find duplicate values
    int arr[8] = {1,2,4,6,2,5,8,5};
    cout<<"Duplicate values are :";
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}
