#include <iostream>
using namespace std;
int main()
{
    int a, an, b, bn, c, cn;
    cin >> a >> b >> c;
    an = a / 10 % 10;
    bn = b / 10 % 10;
    cn = c / 10 % 10;
    cout << an * 100 + bn * 10 + cn;
    return 0;
}
