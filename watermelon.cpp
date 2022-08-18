// Problem link : https://codeforces.com/contest/4/problem/A
// my submission: https://codeforces.com/contest/4/submission/168718236

#include <iostream>

using namespace std;

int a;

int main()
{
    cin>>a;
    if(a%2==0 && a!=2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
