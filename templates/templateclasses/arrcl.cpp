// C++ Program to implement
// template Array class
#include <iostream>
using namespace std;

template <typename T> class Array {   //Declares a class template called Array where T is a placeholder for any data type.
private:
    T* ptr;                    // pointer to the array
    int size;                 // size of the array

public:
    //constructor declaration
    Array(T arr[], int s);       //A constructor that takes an array of type T and its size s
    void print();           //member function print the elements
};

template <typename T> Array<T>::Array(T arr[], int s)   //constructor definition outside the class
{
    ptr = new T[s];    //Allocates memory for s elements of type T
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];               //Copies contents from arr[] to the class’s dynamic array ptr[]

}
//Iterates through the dynamically created array using pointer arithmetic and prints each element.
template <typename T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);  //object of the class
    a.print();
    return 0;
}
