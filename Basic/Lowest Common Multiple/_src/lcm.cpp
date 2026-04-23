int LCM(int a, int b) {
    int num1, num2;
    if (a > b)
    {
        num1 = b;
        num2 = a;
    }
    else 
    {
        num1 = a;
        num2 = b;
    }

    while (num1 != 0)
    {
        int remainder = num2 % num1;
        num2 = num1;
        num1 = remainder;
    }
    
    int gcd = num2;
    return ((a * b) / gcd);
}