#include <iostream>
using namespace std;

int main()
{
    int s;
    int t;
    int a;
    int b;
    int m;
    int n;

    int app_count = 0;
    int ora_count = 0;


    cin >> s;
    cout << " ";
    cin >> t;
    cout << " \n";

    cin >> a;
    cout << " ";
    cin >> b;
    cout << " \n";

    cin >> m;
    cout << " ";
    cin >> n;
    cout << " \n";

    int apples[m];
    int oranges[n];

    for(int i=0;i<m;i++)
    {
        cin >> apples[i];
        cout << " ";
    }

    cout << "\n";

    for(int i=0;i<n;i++)
    {
        cin >> oranges[i];
        cout << " ";
    }

    cout << "\n";

    int apples_coor[m];
    int oranges_coor[n];

    for(int i=0;i<m;i++)
    {
        apples_coor[i] = a + apples[i];
        if(apples_coor[i] >=s && apples_coor[i] <=t)
            app_count++;
    }

    for(int i=0;i<n;i++)
    {
        oranges_coor[i] = b + oranges[i];
        if(oranges_coor[i] >=s && oranges_coor[i] <=t)
            ora_count++;
    }

    cout << app_count << "\n";
    cout << ora_count << "\n";


    return 0;
}

