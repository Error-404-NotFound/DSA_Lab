#include<iostream>
using namespace std;

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
    for(int i=0;i<)
}

int main() {
    int n;
    cin >> n;
    Array A;
    A.reserve(n);
    cout << A.size() << "\n";
    return 0;
}