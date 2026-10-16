#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x;
    cout <<"Enter number : ";
    cin>>x;
    cout<<setprecision(2)<<fixed<<x;
    return 0;
}