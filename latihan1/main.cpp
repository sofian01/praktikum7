#include <iostream>

using namespace std;
void tukar(int &a, int &b){
    a=15;
    b=25;
}
int main()
{
    int a,b;
    a=25;
    b=15;
    cout << "Nilai a = " <<a<< endl;
    cout << "Nilai b = " <<b<< endl;
    cout << "SETELAH DITUKAR"<< endl;
    tukar(a,b);
    cout << "Nilai a = " <<a<< endl;
    cout << "Nilai b = " <<b<< endl;
    return 0;
}
