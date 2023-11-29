#include <bits/stdc++.h>
using namespace std;

int somaPares(int a, int b){
    int soma = 0;
    for(int i=a; i<=b; i++){
        if(i%2==0) soma+=i;
    }
    return soma;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << "Soma: " << somaPares(a, b) << endl;
    return 0;
}