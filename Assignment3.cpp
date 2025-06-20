#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
class SimpleVector
{
private:
    T* data;
    int currentSize;
    int currentCapacity;

public:
    SimpleVector()
    {
        data = new T[10];
        currentSize = 0;
        currentCapacity = 10;
    }

    SimpleVector(int capacity)
     {
        data = new T[capacity];
        currentSize = 0;
        currentCapacity = capacity;
    }

    ~SimpleVector()
    {
        delete[] data;
        data = nullptr;
    }

    //연산자 오버로딩
    T& operator[](int index)
    {
        return data[index];
    }

    void push_back(const T& value)
    {
        if (currentSize >= currentCapacity)
        {
            return;
        }

        data[currentSize] = value;
        ++currentSize
    }

    void pop_back()
    {
        --currentSize;
    }

    int size() const
    {
        return currentSize;
    }

    int capacity()
    {
        return currentCapacity;
    }

};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    SimpleVector<int> sv1;

    sv1.push_back(5);
    sv1.push_back(6);
    sv1.push_back(7);

    sv1.pop_back();

    for (int i = 0; i < sv1.size(); ++i)
    {
        cout << "벡터 1의: " << ㅑ << "번째 요소" << sv1[i] << endl;
    }

    cout << "벡터 1의 크기:" << sv1.size() << endl;
    cout << "벡터 1의 용량:" << sv1.capacity() << endl;

    cout << "\n==============================" << endl;
}