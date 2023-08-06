#include<iostream>
using namespace std;
int main()
{
    int n, petya, vasya, tonya, num(0);
    cin>>n;
    while(n--)
    {
        cin>>petya>>vasya>>tonya;
        if(petya+vasya+tonya>=2)
        {
            num +=1;
        }
    }
    cout<<num<<endl;
    return 0;
}
