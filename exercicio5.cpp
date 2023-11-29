#include <bits/stdc++.h>
using namespace std;

int pa(int a, int b, int c){
   return (c*(a+b))/2;
}

int main(){
    int prim_elem, n_elem, n;
    cin >> prim_elem >> n_elem >> n;

    cout << pa(prim_elem, n_elem, n) << endl;
    return 0;
}