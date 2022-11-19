#include <iostream>

using namespace std;

int main()
{
    string s = "Hello, world!";
    
    cout << s.find('o') << endl;
    if(s.find('o') == string::npos) cout << "empty" << endl;
    else cout << s.find('o') << endl;

    if(s.find_first_of('o') == string::npos) cout << "empty" << endl;
    else cout << s.find_first_of('o') << endl;

    if(s.find('o',5) == string::npos) cout << "empty" << endl;
    else cout << s.find('o',5) << endl;

    if(s.find('o') == string::npos) cout << "empty" << endl;
    else cout << s.find('o') << endl;
    cout << s.find('o',5) << endl;
    cout << s.find_last_of('o') << endl;

    return 0;
}