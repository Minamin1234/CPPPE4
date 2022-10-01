#include <iostream>

class mutex
{
public:
    void lock()
    {
        std::cout << "LOCK" << std::endl;
    }

    void unlock()
    {
        std::cout << "UNLOCK" << std::endl;
    }
};

mutex m_;
void threadfunc()
{
    try
    {
        m_.lock();
        throw std::runtime_error("例外が発生しました。");
        m_.unlock();
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    threadfunc();
    return 0;
}