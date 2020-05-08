// შეადგინეთ პროგრამა, რომელშიც გათვალისწინებულია მხოლოდ მცირე ზომის
// ლათინური ასოებისგან შედგენილი ერთი სტრიქონის შეტანა და მხოლოდ ამ სტრიქონის
// სიმბოლოთა გადანაცვლებით მიღებული ყველა სტრიქონისგან შედგენილ და ანბათწყობით
// დალაგებულ მიმდევრობაში მოცემული სტრიქონის რიგითი ნომრის დადგენა, თუ გადანომვრა იწყება 1-ით.
// სტრიქონის სიგრძე არ აღემატება 12-ს.

//g++  5.4.0

#include<bits/stdc++.h>

using namespace std;

//int main()
//{
  //  string S, D;
  //  cin >> S; D=S;
   // long long i=0;
   // sort(D.begin(), D.end());
   // do
   // {
       // ++i;
     //   if(D==S)break;
   // }
   // while(next_permutation(D.begin(), D.end()));
   // cout << i;
// }

int C[256];

int main()
{
	string S,D;
	cin>>S; D=S;
	int i;
	for(i=0; i<S.size(); ++i)
		++C[S[i]];
	long long ans=0, Mr, Mn, k, j;
	Mr=Mn=k=j=1;
	for(i=0; i<256; ++i, j=1)
		while(C[i]--)
		{
			Mr*=k++;
			Mn*=j++;
			Mr/=Mn;
			Mn=1;
		}
	cout << Mr;
}
