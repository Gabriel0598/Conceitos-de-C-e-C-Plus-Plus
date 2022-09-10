#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a = 3;
    long b = 12345678912345;
    char c = 'a';
    float d = 334.23;
    double e = 14049.30493;

    cin >> a >> b >> c >> d >> e; //Sobrescreve a entrada previamente informada
    cout << a << endl << b << endl << c << endl << d << endl << e << endl;

    return 0;
}
