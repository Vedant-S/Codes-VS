#include<iostream>
using namespace std;
int main()
{
    int amount;
    double balance;
    cin>>amount;
    cin>>balance;
    double rem_bal;
    if(amount%5==0)
    {
        if(amount<balance && ((amount+0.5)<=balance))
        {
            rem_bal=balance-amount-(0.5);
            cout<<rem_bal<<endl;
        }
        else
        cout<<balance<<endl;
    }
    else
    cout<<balance<<endl;
}
