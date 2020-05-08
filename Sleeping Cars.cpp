// A train contains sleeping cars, marked with letter k, and sitting cars, marked with letter p.
// Find the biggest number of sleeping cars that follow each other in the train.

// Input
// One line contains a sequence of letters k and p, with length from 1 to 1000 characters.

// Output
// Print the maximum number of seeping cars that follow each other.

#include <iostream>

using namespace std;

int main() {
    string S;
    int i, c_1=0, c_2=0;
    cin >> S;
    for (i=0; i<S.size(); i++)
    {
        if(S[i]=='k')
        {
            c_1+=1;
            if(c_1>c_2)c_2=c_1;
        }
        if(S[i]=='p')
        {
            c_1=0;
        }
    }
    cout << c_2;
}
