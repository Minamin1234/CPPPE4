#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> m;

    m.insert(make_pair("foo",3));
    m.insert(make_pair("foo",1));
    cout << m["foo"] << endl;

    m["foo"] = 4;
    cout << m["foo"] << endl;
    return 0;
}