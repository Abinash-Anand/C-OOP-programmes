//write a c++ program to find the sum of individual digits of a positive integer
#include <iostream>
using namespace std;
class positive_sum
{
public:
    void process()
    {
        int number, sum = 0, modulus;
        cout << "Enter a positive number: ";
        cin >> number;
        while (number > 0)
        {
            modulus = number % 10;
            sum = sum + modulus;
            number = number / 10;
        }

        {
            cout << "Sum of the positive integer is = " << sum << endl;
        }
    }
};
int main()
{
    positive_sum add1;
    add1.process();
    return 0;
}
