#include <iostream>

using namespace std;

int main()
{
    string s = "Hello, world!";
    
    cout << s.find('o') << endl;
    cout << s.find_first_of('o') << endl;
    cout << s.find('o',5) << endl;
    cout << s.find_last_of('o') << endl;

    return 0;
}