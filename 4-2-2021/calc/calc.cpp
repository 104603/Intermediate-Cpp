#include<iostream>

using namespace std;

void add(double var1,double var2)
{
    cout<<var1+var2<<"\n";
}

void sub(double var1,double var2)
{
    cout<< var1-var2<<"\n";
}

void mul(double var1,double var2)
{
    cout<< var1*var2<<"\n";
}

void div(double var1,double var2)
{
    cout<< var1/var2<<"\n";
}

int main()
{
    double a=12,b=5,c=3;
    add(a,b);
    add(b,c);
    add(a,c);
    sub(a,b);
    sub(b,c);
    sub(a,c);
    mul(a,b);
    mul(b,c);
    mul(a,c);
    div(a,b);
    div(b,c);
    div(a,c);

    return 0;
}