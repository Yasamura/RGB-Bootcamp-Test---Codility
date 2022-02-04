#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int x = 0;
    int temp = 0;
    int j = 1;

    cin >> n;
    cout << "\n";

    int a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        cout << " ";
        cin >> b[i];
        cout << "\n";
    }

    for(int i=0;i<n;i++)
    {
        for(int k=0;k<=temp;k++)
        {
            temp = j*j;
            if(temp>=a[i] && temp<=b[i])
                sum++;
            if(temp>b[i])
                temp = 0;
            j++;
        }
        cout << sum << "\n";
        sum = 0;
        j = 1;
    }

}
