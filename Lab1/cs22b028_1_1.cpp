%%writefile cs22b028_1_1.cpp


#include<bits/stdc++.h>
#include<ctime>
#include<chrono>
using namespace std;

// nth Fibonacci number
// Write a function to compute the nth Fibonacci number using recursion and return the result.
//  Write a function to compute the nth Fibonacci number using loops and return the result.
// Validation: check the outputs of two functions
// Speedup: Run the above two programs on various values of n and prepare a table with running times on two approaches and the speedup of the efficient approach with respect to the other approach.


double fibo_r(int n)
{
    if(n<2)
    {
        return n;
    }
    return fibo_r(n-1)+fibo_r(n-2);
}

double fibo(int n)
{
    double a=1,b=0,c;
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
    // ios_base::sync_with_stdio(false);
    int test_cases[10] = {1,2,5,10,15,20,25,30,40,50};
    double time_loop[10];
    double time_recursion[10];
    double speedup[10];

    clock_t start, stop;
    double duration_r, duration, clocks;

    for(int i=0;i<10;i++) {

        cout << "Test case: " << test_cases[i] << "\n";
        int n=test_cases[i];

        start = clock();
        string result = to_string(fibo(n));
        stop = clock();
        cout << "without using recursion: " << result << "\n";
        clocks = (stop - start);
        duration = clocks/(double)CLOCKS_PER_SEC;
        // cout<<duration<<"seconds"<<endl;
        time_loop[i]=duration;

        start = clock();
        result = to_string(fibo_r(n));
        stop = clock();
        cout << "using recursion: " << result << "\n";
        clocks = (stop - start);
        duration_r = clocks/(double) CLOCKS_PER_SEC;
        // cout<<duration_r<<"seconds"<<endl;
        time_recursion[i]=duration_r;

        speedup[i]=duration_r/(double)duration;
        // cout << "Ratio: " << ratio << "\n";
        cout << "\n";
    }

    cout << "n" << "\tTime recursion" << "\tTime loop" << "\tSpeedUp" << endl;
    for(int i=0;i<10;i++) {
        cout << test_cases[i] <<"\t"<< time_recursion[i] <<"\t\t"<< time_loop[i] <<"\t\t"<< speedup[i] << endl;
    }

    return 0;
}