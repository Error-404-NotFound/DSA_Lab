#include<bits/stdc++.h>
using namespace std;

// Design a data-structure relation R and support the following operations using classes in C++. 
// R.init(n); // The relation R is established on the set {1,.....n}.
// R.add(1,2); // The pair (1,2) is added to R.
// R.add(3,4); // The pair (3,4) is added to R.
// R.isReflexive(); // returns true if and only if R is reflexive
// R.isSymmetric(); //returns true if and only if R is symmetric.


class Relation {
    private:
        int n;
        int **m;
    public:
        Relation(int n) {
            this->n=n;
            m = new int*[n+1];
            for(int i=0;i<n+1;i++) {
                m[i] = new int[n+1];
            }
            for(int i=0;i<n+1;i++) {
                for(int j=0;j<n+1;j++) {
                    m[i][j] = 0;
                }
            }
        }
        void init(int n);
        void add(int a,int b);
        void display();
        void isReflexive();
        void isSymmetric();
};

void Relation::init(int n) {
    this->n=n;
}

void Relation::add(int a,int b) {
    m[a][b]=1;
}

void Relation::display() {
    for(int i=1;i<n+1;i++) {
        for(int j=1;j<n+1;j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    // ~Relation();
}

void Relation::isReflexive() {
    for(int i=1;i<n+1;i++) {
        if(m[i][i]!=1) {
            cout << "Not Reflexive\n";
            return;
        }
    }
    cout << "Reflexive\n";
    // ~Relation();
}

void Relation::isSymmetric() {
    for(int i=1;i<n+1;i++) {
        for(int j=1;j<n+1;j++) {
            if(m[i][j]!=m[j][i]) {
                cout << "Not Symmetric\n";
                return;
            }
        }
    }
    cout << "Symmetric\n";
    // ~Relation();
}

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    Relation R(n);
    R.display();
    R.isReflexive();
    R.isSymmetric();
    cout << "\n";
    cout << "\n";
    R.add(1,2);
    R.add(3,4);
    R.display();
    R.isReflexive();
    R.isSymmetric();
    cout << "\n";
    cout << "\n";
    R.add(2,1);
    R.add(4,3);
    R.display();
    R.isReflexive();
    R.isSymmetric();
    cout << "\n";
    cout << "\n";
    R.add(1,1);
    R.add(2,2);
    R.add(3,3);
    R.add(4,4);
    R.display();
    R.isReflexive();
    R.isSymmetric();
    cout << "\n";
    cout << "\n";
    return 0;
}