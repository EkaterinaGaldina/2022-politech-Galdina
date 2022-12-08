#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    double a, b, result;
    char s;
    cout << "Calculator\n Enter operations in a$b format\n";
    while(true)
    {
        cin >> a >> s >> b;
        result = calculate(a, s, b);
        cout << a << s << b << "=" << result << endl;
    }
    return 0;

}