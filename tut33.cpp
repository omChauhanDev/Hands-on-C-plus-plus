#include <iostream>
using namespace std;

// Dynamic Initialization of Objects using Constructors in C++ :-
// The dynamic initialization of the object means that the object is initialized at the runtime.
// Dynamic initialization of the object using a constructor is beneficial
// when the data is of different formats.

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r); // r can be like 0.05
    BankDeposit(int p, int y, int r);   // r can be like 5
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "Your principal value was Rs. " << principal << ". Return value afer "
         << years << " years is Rs. " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter your principal amount :";
    cin >> p;
    cout << "Enter for how many years you need to invest :";
    cin >> y;
    cout << "Enter the interest rate you are getting (in float) :";
    cin >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter your principal amount :";
    cin >> p;
    cout << "Enter for how many years you need to invest :";
    cin >> y;
    cout << "Enter the interest rate you are getting (in int) :";
    cin >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}