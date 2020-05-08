// Julius Caesar used his own method of encrypting text. Each letter is replaced by the
// following in alphabetical order by k positions in the circle. Given an encrypted text.
// Determine its original text.

// Input
// The first line contains the encrypted text containing no more than 255 Latin capital
// letters. The second line contains integer k (1 ≤ k ≤ 10).

// Output
// Print the result of decoding.


//g++  5.4.0

#include <iostream>

using namespace std;

int main()
{
    string S;
    int i, t;
    cin >> S >> t;
    for (i=0; i<S.size(); i++)
    {
        if(int(S[i])-t<65)
        {
            S[i]=char((int(S[i])-t)+26);           
        }
        else
        {
            S[i]=char(int(S[i]-t));
        }
    }
    cout << S;
}
