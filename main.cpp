#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int a0;
    cout << " Wprowadz liczbe: ";
    cin >> a0;
    cout << endl << endl;
    int a = 1;
    int b = a0;
    int a1 = 0;
    vector<int> e;
    e.push_back(a0);
    while (true)
	{
        a1 = 0;
        while (b != 0)
		{
            a1 += (b % 10)  * (b % 10);
            b = b / 10;
        }
        for (int i = 0; i < e.size(); i++)
            if (e[i] == a1)
            {
                cout << "Wynik =  " << a + 1;
               return a+1;
            }
        e.push_back(a1);
        b = a1;
        a++;
    }

    return 0;
}
