#include <iostream>
#include <map>
#include <functional>

using namespace std;

int main(){

    map<string, int, greater<string>> m;

    m.insert(make_pair("foo",3));
    m.insert(make_pair("bar",1));
    m["bas"] = 4;

    for(map<string, int>::iterator it = m.begin();
    it != m.end();++it){
        cout << it->first << "," << it->second << " ";
    }
    return 0;
}