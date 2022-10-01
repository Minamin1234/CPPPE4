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

class lock
{
    mutex& m_;
public:
    lock(mutex &m) : m_(m) { m_.lock(); }
    ~lock() { m_.unlock(); }
};

mutex m_;
void threadfunc()
{
    try
    {
        lock lk(m_);
        throw std::runtime_error("例外が発生しました。");
    }
    catch(const std::runtime_error& e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    threadfunc();
    return 0;
}