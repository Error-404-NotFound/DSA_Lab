#include<iostream>
using namespace std;

// Design a data-structure myString S and support the following operations using classes in C++. 
// S.length(); //returns the length of the string.
// S.init(“hello”); // the string S is initialized to “hello” - we have to copy the word “hello” to a character array, which is maintained internally in S.
// S.upper(); // convert all characters in s to uppercase.
// S.display(); // print the current string


class String {
    private:
        char *s;
    public:
        void init(string str);
        int lambai();
        void display();
        void upper();
};

void String::init(string str) {
    int i=0;
    s=new char[str.length()];
    for(i=0;i<str.length();i++) {
        s[i]=str[i];
    }
    s[i+1]='\0';
}

int String::lambai() {
    int count=0;
    for(int i=0;s[i]!='\0';i++) count++;
    return count;
}

void String::display() {
    for(int i=0;s[i]!='\0';i++) {
        cout << s[i];
    }
    cout << "\n";
}

void String::upper() {
    for(int i=0;s[i]!='\0';i++) {
        if(s[i]>=65 && s[i]<=90) {
            cout << s[i];
        }
        else if(s[i]>=97 && s[i]<=122) {
            cout << char(s[i]-32);
        }
    }
    cout << "\n";
}

int main() {
    string str="Hello";
    String S;
    S.init(str);
    cout << S.lambai() << "\n";
    S.display();
    S.upper();
    return 0;
}