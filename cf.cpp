// recursive function to find the factorial of a number
void factorial(int n)
{
    if (n == 0)
    {
        cout << "The factorial of " << n << " is 1" << endl;
    }
    else
    {
        factorial(n - 1);
        cout << "The factorial of " << n << " is " << n * n << endl;
    }
}
 //recursive function with library vector
void factorial(vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "The factorial of " << v[0] << " is 1" << endl;
    }
    else
    {
        factorial(v);
        cout << "The factorial of " << v[0] << " is " << v[0] * v[0] << endl;
    }
}

// fibonacci
void fibonacci(int n)
{
    if (n == 0)
    {
        cout << "The fibonacci of " << n << " is 0" << endl;
    }
    else if (n == 1)
    {
        cout << "The fibonacci of " << n << " is 1" << endl;
    }
    else
    {
        fibonacci(n - 1);
        cout << "The fibonacci of " << n << " is " << n * n << endl;
    }

//Reverse A Number Using Recursion
void reverse(int n)
{
    if (n == 0)
    {
        cout << "The reverse of " << n << " is 0" << endl;
    }
    else
    {
        reverse(n / 10);
        cout << "The reverse of " << n << " is " << n % 10 << endl;
    }
}


int main()
{
    int n;  // number to find factorial of
    cout << "Enter a number: ";
    cin >> n;
    factorial(n);

    vector<int> v;
    v.push_back(n);
    factorial(v);


    fibonacci(n);
    
    reverse(n);
    return 0;
}

