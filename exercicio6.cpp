#include <bits/stdc++.h>
using namespace std;

int formaGeo(int a, int b){
   if(a==b) return 1;
   else return 0;
}

int main(){
    int b, h;
    cin >> b >> h;

    cout << formaGeo(b, h) << endl;
    return 0;
}