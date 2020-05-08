// შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია მხოლოდ მცირე ზომის
// ლათინური ასოებისგან შედგენილი ერთი სტრიქონის შეტანა და მხოლოდ ამ სტრიქონში
// გამოყენებული სიმბოლოებისგან შედგენილი ამავე სიგრძის მქონე ყველა შესაძლებელი
// სტრიქონისგან შედგენილი და ანბანთწყობით დალაგებული მიმდევრობისთვის მოცემული
// სტრიქონის რიგითი ნომრის დადგენა, თუ გადანომრვა იწყება 1-ით. სტრიქონის სიგრძე
// არ აღემატება 12-ს. მაგალითად, სტრიქონისთვის bab, პასუხი იქნება 6.

//g++  5.4.0

#include<bits/stdc++.h>

using namespace std;

string get_unique(string S)
{
    string SU;
    bool B=true;
    int i, k;
    for (i=0; i<S.size(); i++)
    {
        for (k=0; k<SU.size(); k++)
        {
            if (S[i]==SU[k])
            {
                B=false;
            }
        }
        if (B==true)SU+=S[i];
        B=true;
    }
    return SU;
}

int main()
{
    string S, SU, SB;
    int i, k, ans=0;
    cin >> S;
    SU = get_unique(S);
    sort(SU.begin(), SU.end());
    for (i=0; i<S.size(); i++)
    {
        for (k=0; k<SU.size(); k++)
        {
            if (S[i]==SU[k])
            {
                SB+=char(k+48);
            }
        }
    }
    for (i=0; i<SB.size(); i++)
    {
        ans = ans*SU.size()+SB[i]-'0';
    }
    cout << ans+1;
}
