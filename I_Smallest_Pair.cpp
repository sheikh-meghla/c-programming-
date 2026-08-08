#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        long long sum;
        int min = 1000000000;
        for(int i = 1; i <= n; i++) {
            for(int j = i+1; j <= n; j++) {
                sum = a[i] + a[j] + j - i;
                if (min > sum)
                {
                    min = sum;
                }
                
            }
        }
        cout << min << "\n";
    }
    

    return 0;
}