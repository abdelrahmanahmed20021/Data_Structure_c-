#include "iostream"
using namespace std;

template <class t>
class Array
{

private:
    t *arr;
    int size;
    int lenght;

public:
    Array(int size)
    {
        this->size = size;
        arr = new t[size];
        lenght = 0;
    }

    bool isEmpty()
    {
        return (lenght == 0);
    }

    bool isFull()
    {
        return (lenght == size);
    }

    void displayArr()
    {
        if (isEmpty())
        {
            cout << "Array is Empty  "<< endl;
            return;
        }
        for (int i = 0 ; i < lenght;i++)
        {
            cout << arr[i] << endl;
        }
    }
    
    void append(t value){
        if(isFull()){
            cout << "Array is Full " << endl;
            return;
        }
        arr[lenght] = value;
        lenght++;
    }
    
};

int main()
{
    Array<int> arr(5);

    cout << arr.isEmpty() << endl;
    cout << arr.isFull() << endl;
 
    arr.append(20);// append new v
    arr.append(40);
    arr.append(50);
    arr.displayArr();
}