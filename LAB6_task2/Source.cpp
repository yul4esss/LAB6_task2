#include <iostream>

using namespace std;

//template class
template <class T>

class Sort
{
private:

    const int size = 10;

    T array;


public:

    Sort(T arr) 
    {
        array = arr;
    }

    void printArray()
    {
        cout << "-------------Your array-----------" << endl;
        for (int i = 0; i < size; i++) {
            cout << array[i] << ' ';
        }
    }

    //method that sorts an array in decreased order
    void sorted()
    {
        int temp;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - 1; j++) {
                if (array[j] < array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        cout << "\n------------After sort-------------" << endl;
        for (int i = 0; i < size; i++) {
            cout << array[i] << ' ';
        }

    }
};
int main()
{
    const int size = 10;

    //setting an array
    int array[size] = { 22, -1, -9, 14, 6, -5, 103, 75, -16, 99 };

    Sort<int*> Arr(array);
    Arr.printArray();
    Arr.sorted();
}