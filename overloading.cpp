#include<iostream>
using namespace std;
class Complex
{
    int a, b;
    public :
    Complex (int x, int y)
    {
        a = x;
        b = y;
    }
    Complex()
    {

    }
    void showData()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    friend Complex operator-(Complex);  
};
Complex operator-(Complex c1)
{
    Complex temp;
    temp.a = -c1.a;
    temp.b = -c1.b;
    return temp;
}

int main()
{
    Complex c1(3, 4),c2;
    c1.showData();
    c2 = -c1;
    c2.showData();
    return 0;
}
