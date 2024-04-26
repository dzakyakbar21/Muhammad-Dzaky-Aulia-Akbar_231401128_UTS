#include <iostream>
using namespace std;
int main(){
    system("cls");
    int x;
    cout   << "Masukkan nilai : ";
    cin    >> x;

    if(x >= 2 && x <= 10){
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= i; j++){
                cout << "x ";
            }
            cout << endl;
        }
        
        for(int i = 1; i <= x; i++){
            for(int k = 1; k <= x; k++){
                cout << "  ";
            }
            for(int j = 2; j <= i; j++){
                cout << "  ";
            }
            for(int l = x; l >= i; l--){
                cout << "x ";
            }
            cout << endl;
        }
    }
    else {
        cout<<"Inputan Tidak Memenuhi Batas";
    }
}