#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    string a = "{hello_world}";
    int  len = a.size();
    for(int i = 0 ; i < len ; i++)
    {
        if(int(a[i])==111)
            a[i]=char(48);
    }
    cout<<"flag="<<a;
}