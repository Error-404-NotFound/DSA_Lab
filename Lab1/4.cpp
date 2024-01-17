#include<iostream>
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
        int *p;
        int count;
        int capacity;
    public:
        void reserve(int n);
        int size();
        void insert(int n);
        void del(int n);
        int search(int n);
        void display();
};

void Array::reserve(int n) {
    p=new int[n];
    capacity=n;
    count=0;
}

int Array::size() {
    
}

int Array::insert(int n) {  
}

int main() {
    int n;
    cin >> n;
    Array A;
    A.reserve(n);
    cout << A.size() << "\n";
    return 0;
}