#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int prime[100], k = 0;

    for(int i = 2; i <= n; i++)
    {
        int count = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
        {
            prime[k] = i;
            k++;
        }
    }

    cout << "Prime numbers are: ";

    for(int i = 0; i < k; i++)
    {
        cout << prime[i] << " ";
    }

    return 0;
}
