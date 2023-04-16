#include <iostream>

using namespace std;

int pangkat(int x, int y){
    if (y == 0){
        return 1;
    }
    else{
        return x*(y-1);
    }
}
int main(){
    cout << "Masukkan nilai x: ";
    int x;
    int y;
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;
    pangkat(int x,int y);
    cout << pangkat(int x,int y);
}

