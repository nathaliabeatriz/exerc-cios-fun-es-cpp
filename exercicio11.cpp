#include<bits/stdc++.h>
using namespace std;

void divisores(int num){
    for(int i=1; i<=num/2; i++){
        if(num%i==0) cout << i << " ";
    }
    cout << num;
}

int main(){
    int n;
    cin >> n;
    divisores(n);
    return 0;
}