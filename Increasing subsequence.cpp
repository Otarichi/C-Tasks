// Given n (1 ≤ n ≤ 105) integers x1, x2, ..., xn (1 ≤ xi ≤ 60000). Delete from them the least
// amount of numbers so that the rest were in ascending order.

// Input
// The first line contains the number n. In the second line the integers x1, x2, ..., xn are given.

// Output
// Print in the first line the amount of not erased numbers, in the second print the list of
// unerased numbers in the original order. If several answers exist, print any.

#include <bits/stdc++.h>

using namespace std;

int A[100000],D[100000],B[100001];

int main()
{
    int i,j,k,M=1,N;
    cin>>N;
    cin>>A[0]; D[0]=1; B[1]=A[0];
    for(i=1;i<N;++i)
    {
        cin>>A[i];
        if(A[i]>B[M])B[++M]=A[i],D[i]=M;
        else if(A[i]<B[1])B[1]=A[i],D[i]=1;
        else
        {
            for(j=M;;--j)
                if(A[i]>=B[j])break;
            D[i]=j+(A[i]>B[j]);
            B[j+(A[i]>B[j])]=A[i];
        }
    }
    for(i=j=N-1,k=M;k;--i)
        if(D[i]==k){A[j--]=A[i];--k;}
    cout<<M<<endl;
    for(i=j+1;i<N;++i)
        cout<<A[i]<<' ';
}
