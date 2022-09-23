#include <iostream>
#include <vector>
#include <limits>
#include <stdexcept>

using namespace std;

//(7) 授業スライドp12,13のプログラムをさ区政し、実行せよ。
//(このプログラムは、スペースの都合上の省略が多い。そこに気をつけよ)

unsigned int sum(const vector<unsigned int>& v)
{
    unsigned int result = 0;
    for(size_t i = 0;i < v.size();i++)
    {
        if(v.at(i) > numeric_limits<int>::max() - result)
        {
            throw overflow_error("sum is overflow");
        }
        result += v.at(i);
    }
    return result;
}

int main()
{
    vector<unsigned int> v;
    v.push_back(numeric_limits<int>::max());
    v.push_back(numeric_limits<int>::max());

    try
    {
        unsigned int result = sum(v);
        cout << "sum is " << result << endl;
    }
    catch(overflow_error& e)
    {
        cerr << e.what() << endl;
        exit(-1);
    }
    catch(...)
    {
        cerr << "unknown error is detected." << endl;
        exit(-1);
    }
    
    return 0;
}