#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, arg1, arg2, hasil_kali, rem;
    cout << "masukan sebuah bilangan: ";
    cin >> a;
    cout << "masukan sebuah bilangan: ";
    cin >> b;
    arg1 = max(a,b);
    arg2 = min(a,b);
    hasil_kali = floor(arg1/arg2);
    rem = fmod(arg1,arg2);
    cout << "algoritma euclide" << endl;
    cout << arg1 << "\t" << " = " << hasil_kali << "*" << arg2 << " + " << rem << endl;
    while(rem != 0){
        arg1 = arg2;
        arg2 = rem;
        hasil_kali = floor(arg1/arg2);
        rem = arg1 - (hasil_kali*arg2);
        cout << arg1 << "\t" << " = " << hasil_kali << "*" << arg2 << " + " << rem << endl;
    }
    cout << "FPB: " << arg2 << endl;
    return 0;
}