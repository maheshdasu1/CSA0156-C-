#include <iostream>
using namespace std;
int main() 
{
    double sum = 0.0;
    double a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    for (int i = 1; i <= a; ++i)
	{
        int fact = 1;
        for (int j = 2; j <= i; ++j) 
		{
            fact *= j;
        }
        double term = static_cast<double>(fact) / i;
        sum += term;
    }
    cout << "Sum of the series: " << sum << endl;
    return 0;
}
