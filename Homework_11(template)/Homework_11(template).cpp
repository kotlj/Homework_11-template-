
#include <iostream>

template <typename T>

T findMax(T* &obj, int size)
{
    T max = obj[0];
    for (int i = 0; i < size; i++)
    {
        if (obj[i] > max)
        {
            max = obj[i];
        }
    }
    return max;
} 

template <typename T>

T findMin(T* &obj, int size)
{
    T min = obj[0];
    for (int i = 0; i < size; i++)
    {
        if (obj[i] < min)
        {
            min = obj[i];
        }
    }
    return min;
}

template<typename T>

void baubleSort(T* &obj, int size)
{
    T helper;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (obj[j] < obj[j + 1])
            {
                helper = obj[j];
                obj[j] = obj[j + 1];
                obj[j + 1] = helper;
            }
        }
    }
}

template<typename T>

T binSearch(T* arr, T obj, int size)
{
    int min = 0;
    int max = size;
    int key = size / 2;
    for (int i = 0; i < size; i++)
    {
        if (arr[key] = obj)
        {
            return key;
        }
        else if (arr[key] != obj)
        {
            if (obj < arr[key])
            {
                max = key - 1;
            }
            else if (obj > arr[key])
            {
                min = key + 1;
            }
        }
    }
    return -1;
}

template<typename T>

void swapObj(T* &arr, T obj, int indx, int size)
{
    T* tample = new T[size];
    for (int i = 0; i < size; i++)
    {
        if (i != indx)
        {
            tample[i] = arr[i];
        }
        else if (i == indx)
        {
            tample[i] = obj;
        }
    }
    delete[] arr;
    arr = tample;
}

int main()
{
    int size = 10;
    int* test = new int[size];
    for (int i = 0; i < size; i++)
    {
        test[i] = i;
    }
    std::cout << findMax(test, size) << '\n' << findMin(test, size) << '\n' <<
        binSearch(test, 7, size) << '\n';
    swapObj(test, 9, 3, size);
    std::cout << test[3];
}