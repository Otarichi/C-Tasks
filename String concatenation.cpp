// In many applications it is necessary to perform various operations with strings. Two common
// operations are the reverse of a string and concatenation of two or more strings.

// The reverse of string s gives a string sR, that consists of the same symbols like s, but
// going in reverse order. For example the reverse of a string "abcde" is "edcba". Further in
// this problem, instead of the notation sR, the notation (s) will be used.

// As a result of concatenating two strings s and t we get the string st, where first written
// the characters of the string s and then the characters of the string t. Similarly, the
// concatenation of three, four, and more strings is defined. For example, the result of
// concatenation of "abc" and "cda" is "abccda".

// Your task is to determine the result of concatenating of several strings, some of which need
// to be reversed.

// Input
// Consists of a single line that contains only lowercase letters of the Latin alphabet and
// parentheses. Its length does not exceed 200 characters. This line describes the
// concatenation of several strings, some of which need to be reversed.

// In the given line to the right of each opening bracket there is a closing, to the left of
// each closing bracket there is an opening, and there are no other brackets between the
// opening and closing brackets corresponding to each other and there must be at least one letter.

// Output
// Print the result of concatenation.

//g++  5.4.0

#include <iostream>

using namespace std;

string sR(string s){
    int i;
    for (i=0; i<s.size()/2; i++)
    {
        char t = s[i];
        s[i]=s[s.size()-(i+1)];
        s[s.size()-(i+1)]=t;
    }
    return s;
}

int main() {
    string s,t,st_new,st;
    bool B = false;
    cin >> s >> t;
    st=s+t;
    int i,start=0,end=-2;
    for(i=0; i<st.size(); i++)
    {
        if(st[i]=='(')
        {
            B = true;
            start+=i+1;
        }
        if(B==true)end+=1;
        if(st[i]==')')
        {
            st_new+=sR(st.substr(start,end));
            start=0;
            end=-2;
            B = false;
        }
        if(st[i]!='(' && st[i]!=')' && B!=true)st_new+=st[i];
    }
    cout << st_new;
}
