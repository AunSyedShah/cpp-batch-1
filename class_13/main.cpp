#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, string> m;

    m.insert(pair<string, string>("4420400000000", "syed aun"));
    cout << m.find("4420400000000")->first << endl;

    system("pause");
    return 0;
}