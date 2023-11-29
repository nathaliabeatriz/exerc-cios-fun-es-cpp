#include <bits/stdc++.h>
using namespace std;

void raiz(int a, int b, int c){
   int delta = (b*b) - (4*a*c);
   if(delta<0) cout << "Não possui raízes\n";
   else if(delta>0){
    cout << "Raízes: " << ((-b)+sqrt(delta))/(2*a) <<
         " e " << ((-b)-sqrt(delta))/(2*a) << endl;
   } else {
    cout << "Raiz: " << -b/(2*a);
   }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    raiz(a, b, c);
    return 0;
}