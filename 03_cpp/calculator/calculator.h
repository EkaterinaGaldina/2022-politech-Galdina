double expon(double a, int b)
{
    double res = 1;
    for(int i = 0; i < b; ++i)
        res *= a;
    return res;
}

double calculate(double a, char s, double b)
{
    switch(s)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0)
                throw "Error";
            else return a / b;
        case '^':
            return expon(a, static_cast<int>(b));
        default:
            return .0;
    }
}