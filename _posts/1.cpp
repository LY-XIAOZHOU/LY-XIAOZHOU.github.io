#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    string a ="f\nk\fw&O.@\x11x\rZ;U\x11p\x19";
    string c = "F\x1Fv\"M#D\x0Eg\x06h\x0FG2O";
    string b = a + c;
    int len = b.size() ; 
   for (int i = len -1; i>0; i-- )
    b[i] ^= b[i-1];
    cout<<"flag="<<b;
}