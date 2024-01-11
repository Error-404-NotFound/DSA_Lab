#include<bits/stdc++.h>
using namespace std;

string add(string s1,string s2) 
{
    int n1=s1.length();
    int n2=s2.length();
    if(n1<n2) {
        string temp=s1;
        s1=s2;
        s2=temp;
    }
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    string result="";
    int carry=0;
    for(int i=0;i<n2;i++) {
        int sum=(int)(s1[i]-'0') + (int)(s2[i]-'0')+carry;
        int digit = sum%10;
        result+=(char)(digit+'0');
        carry=sum/10;
    }

    for(int i=n2;i<n1;i++) {
        int sum=(int)(s1[i]-'0')+carry;
        int digit = sum%10;
        result+=(char)(digit+'0');
        carry=sum/10;
    }

    if(carry>0) {
        result +=(char)(carry+'0');
    }

    reverse(result.begin(),result.end());
    return result;
}

int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    string result = add(s1,s2);
    int count=0;
    for(int i=0;i<result.length();i++) {
        if(result[i]=='0') count++;
    }
    if(count==result.length()) {
        cout << "0";
    }
    else{
        cout << result;
    }
    cout << "\n";
    return 0;
}