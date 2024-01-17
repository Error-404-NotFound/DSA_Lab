#include<bits/stdc++.h>
using namespace std;

// Design a data structure  sortedArray S and support the following operations using classes in C++.
// S.reserve(k); // reserves space to store k integers
// S.size( ); // returns the number of occupied elements
// S.insert(x ); // insert an integer x 
// S.delete(x); //delete the element x if exists
// S.search(x); // returns true or false based on the existence of x in S
// S.display(); // displays all the elements in S 


class Array {
    private:
        vector<int> v;
    public:
        void reserve(int n);
        int size();
        void insert(int n);
        void del(int n);
        int search(int n);
        void display();
};

void Array::reserve(int n) {
    v.reserve(n);
}

int Array::size() {
    return v.size();
}

void Array::insert(int n) {
    v.push_back(n);
    sort(v.begin(),v.end());
}

void Array::del(int n) {
    int i=search(n);
    if(i!=-1) {
        v.erase(v.begin()+i);
    }
}

int Array::search(int n) {
    for(int i=0;i<v.size();i++) {
        if(v[i]==n) {
            return i;
        }
    }
    return -1;
}

void Array::display() {
    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    Array A;
    A.reserve(n);
    A.insert(1);
    A.insert(2);
    A.insert(3);
    A.insert(4);
    A.display();
    cout << "Size: " << A.size() << "\n";
    cout << "Position of 3: " << A.search(3) << "\n";
    A.del(3);
    cout << "Position of 3 after deleting it: " << A.search(3) << "\n";
    A.display();
    return 0;
}