#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << "\n";

    string rock[n];

    for(int i=0;i<n;i++)
    {
        cin >> rock[i];
        cout << "\n";
    }

    for(int i=0;i<n;i++)
        sort(rock[i].begin(), rock[i].end());

    string first = rock[0];

    for(int i=1;i<n;i++)
    {
        string temp;

        set_intersection(first.begin(), first.end(), rock[i].begin(), rock[i].end(), back_inserter(temp));

        first = temp;
    }


    first.erase(unique(first.begin(), first.end()), first.end());

    int x = first.length();
    cout << x << "\n";
}
