#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    int i = 0;
    long long answer = 0;

    cout << "Enter a Negarive Binary Number : ";
    cin >> n;

    int tempN = n;

    n = abs(n);

    // Finding The One's Complement of Positive n (Directly)
    for (; n != 0 || i < 8; n = n >> 1, i++)
    {
        int lastBit = n & 1;
        if (lastBit == 0)
        {
            lastBit = 1;
        }
        else
        {
            lastBit = 0;
        }
        answer = (lastBit * pow(10, i)) + answer;
    }

    cout << "The one's Complement of Positive n is : " << answer << endl;

    // Finding Two's complement
    long long int twoComp = 0;
    int carr = 1;
    int j = 0;
    for (; answer != 0; answer /= 10, j++)
    {
        int lastDigit = answer % 10;
        if (lastDigit == 1 && carr == 1)
        {
            twoComp = (0 * pow(10, j)) + twoComp;
        }
        else if (lastDigit == 0 && carr == 1)
        {
            twoComp = (1 * pow(10, j)) + twoComp;
            carr = 0;
        }
        else
        {
            twoComp = (lastDigit * pow(10, j)) + twoComp;
        }
    }

    cout << "The Two's Complement is : " << twoComp << endl;

    cout << "** The Binary Representation of " << tempN << " is : " << twoComp << " *****" << endl;


    
    return 0;
}