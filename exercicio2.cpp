#include <bits/stdc++.h>
using namespace std;

int maior(int a, int b){
   if(a>=b) return a;
   else return b;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << maior(x, y) << endl;
    return 0;
}