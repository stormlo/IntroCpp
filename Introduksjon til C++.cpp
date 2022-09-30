
#include <iostream>
using namespace std;


void greeting()
{
    cout << "hva heter du?" << "\n";
    string navn;
    cin >> navn;
    cout << "hei " << navn;
}

int main()
{
    // cout << "Hello World!\n";
   // int poeng;
   // cin >> poeng;
   // cout << poeng;
    greeting();

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            cout << "svarer ikke mere"<<"\n";
            break;
        }

        greeting();

    }

    char a = '1';
    int b = 2;
    long c = 3;
    float d = 4.4;
    double e = 5.5;
    cout << "size of char " << sizeof(a) << "\n";
    cout << "size of int " << sizeof(b) << "\n";
    cout << "size of long " << sizeof(c) << "\n";
    cout << "size of float " << sizeof(d) << "\n";
    cout << "size of double" << sizeof(e) << "\n";
}
 
