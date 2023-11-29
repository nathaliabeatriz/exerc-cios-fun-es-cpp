#include <bits/stdc++.h>
using namespace std;

double calculoJuros(double v, int m, double j){
   return v*m*j;
}

int main(){
    double valor, taxa;
    int meses;
    cin >> valor >> meses >> taxa;
    printf("%.2lf\n", calculoJuros(valor, meses, taxa));
    return 0;
}