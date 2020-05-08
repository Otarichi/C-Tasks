// Для двух заданных неотрицательных троичных чисел определить троичное число, полученное
// поразрядным сложением по модулю 3 всех чисел, расположенных между данными числами, включая и
// эти числа.

// Длина (количество разрядов) каждого из заданных чисел не превосходит 250000.

// Входные данные

// Две строки. В первой строке первое из чисел, а во второй строке – второе число.

// Выходные данные

// Единственная строка - ответ задачи.


#include <iostream>

using namespace std;

string TJ3M(string S)
{
    int i,N=S.size();
    if(S[N-1]=='2')return string(N,'0');
    if(S[N-1]=='0')return S;
    for(i=0;i<N-1;++i)
        if(S[i]!='0')S[i]='1'+(S[i]=='1');
    return S;
}

int main()
{
    string F,S,D;
    cin>>F>>S;
    if(F==S){cout<<F; return 0;}
    int N,Fs=F.size(),Ss=S.size(),i;
    N=max(Fs,Ss);
    if(Fs<N)F=string(N-Fs,'0')+F;
    if(Ss<N)S=string(N-Ss,'0')+S;
    if(F>S)swap(F,S);
    D=TJ3M(F); S=TJ3M(S);
    for(i=0;i<N;++i)
    {
        int d=D[i]-'0',f=F[i]-'0';
        S[i]+=f-d;
        if(S[i]<'0')S[i]+=3;
        else if(S[i]>'2')S[i]-=3;
    }
    cout<<S;
}
