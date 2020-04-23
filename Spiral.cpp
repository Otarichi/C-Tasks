// Spiral
// Output the square, consisting of NxN cells filled with numbers from 1 to N2 in a spiral (see examples).

// Input
// The first line is a single numberN (2 ≤ N ≤ 100).

// Output
// We derive N rows of N numbers, separated by spaces. Not allowed to start a spiral in the other,
// except in the upper left-hand corner, spinning spiral counterclockwise, or outward.

#include <iostream>

using namespace std;

int MATRIX[102][102];

int main()
{
    int N, i, j, M=0, m=0, Di[]{0,1,0,-1},Dj[]{1,0,-1,0};
    cin >> N;
    i = 1;
    j = 0;
    
    //საზღვრის განსაზღვრა
    for (int i=0; i<102; i++)
    {
        MATRIX[0][i] = -1;
        MATRIX[i][0] = -1;
        MATRIX[N+1][i] = -1;
        MATRIX[i][N+1] = -1;
    }
    
    //სპირალის შექმნა
    while(++M<=N*N)
    {
        if(MATRIX[ i+Di[m] ][ j+Dj[m] ])
        { m = (m+1)&3; }
        i+=Di[m]; j+=Dj[m];
        MATRIX[i][j]=M;
    }
    
    //შედეგის გამოტანა
    for (int i=1; i<=N; i++){
        for (int j=1; j<=N; j++){
            cout << MATRIX[i][j] << '\t';
        }
        cout << endl;
        cout << endl;
        cout << endl;
    }
}