#include<iostream>
#include<ctime>
using namespace std;

int fibo_r(int n)
{
    if(n<2) 
    {
        return n;
    }
    return fibo_r(n-1)+fibo_r(n-2);
}

int fibo(int n)
{
    int a=1,b=0,c;
    for(int i=0;i<n;i++) 
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main() 
{
    int n;
    cin >> n;

    clock_t start, stop;
    double duration_r, duration, clocks;

    for(int i=0;i<n;i++) {

        i*=10;
        start = clock();
        int result = fibo_r(i);
        stop = clock();
        cout << "using recursion: " << result << "\n";
        clocks = ( std::clock() - start );
        duration_r = clocks/(double) CLOCKS_PER_SEC;
        cout<<duration_r<<"seconds"<<endl;

        start = clock();
        result = fibo(i);
        stop = clock();
        cout << "without using recursion: " << result << "\n";
        clocks = ( std::clock() - start );
        duration = clocks/(double) CLOCKS_PER_SEC;
        cout<<duration<<"seconds"<<endl;

        double ratio=(double)(duration_r/duration);
        cout << "Ratio: " << ratio << "\n";

        if(ratio>1) {
            cout << "without recursion is good.";
        }
        else{
            cout << "recursion is good.";
        }

        i=i/10;

        cout << "\n\n";
    }

    return 0;
}