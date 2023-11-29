#include <bits/stdc++.h>
using namespace std;

int delta(int a, int b, int c){
    return (b*b)-(4*a*c);
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    cout << delta(a, b, c) << endl;
    return 0;
}