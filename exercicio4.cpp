#include <bits/stdc++.h>
using namespace std;

int qtdPar(int a, int b, int c){
   int qtd=0;
   if(a%2==0) qtd++;
   if(b%2==0) qtd++;
   if(c%2==0) qtd++;
   return qtd;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Quantidade Par: " << qtdPar(a, b, c) << endl;
    return 0;
}