#include <iostream>
#include<iomanip>
using namespace std;
class account
{
    float const tax=0.50;
    float bal;
    int with;
    public:
    void withdraw_bal();
    void show_bal()
     {
         cout<<fixed<<setprecision(2)<<bal<<endl;

     }
};

void account::withdraw_bal()
{
    cin>>with>>bal;

    if(bal>(with+tax))
    {
        if(with%5==0)
    {
       bal=bal-(with+tax);
        cout<<endl;
    }

    }
     account::show_bal();
}
int main() {
	account A;
	A.withdraw_bal();
		return 0;
}

