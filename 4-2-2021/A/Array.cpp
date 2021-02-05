/**
 * @file Array.cpp
 * @author Abhishek Reddy K (abhishekreddy.k@ltts.com)
 * @brief This code will just give you the array index values & data in it.
 * @version 0.1
 * @date 2021-02-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<iostream>

using namespace std;

/**
 * @brief This SimpleArrayClass is a class where all the variables & methods/functions will be availble.
 * 
 */
class SimpleArrayClass
{
    public:
    int size, myArray[10], *ptr;

    /**
     * @brief get(int size) method/function will take the inputs from the user & it has size variable as paramaeter.
     * 
     * @param size 
     */
    void get(int size)
    {
        for (int i = 0; i < size; i++)
        {
            /* code */
            cout << "Enter " << i+1 << " number: ";
            cin >> myArray[i];
        }
    }

    /**
     * @brief print() method will print the data that the user needed.
     * 
     */
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            /* code */
            ptr = &myArray[i];
            cout << "Value in " << i+1 << " location is: " << myArray[i] << " & address of the location is: " << ptr << "\n";
        }
    }
};

/**
 * @brief This is a main method/function.
 * 
 * @return int 
 */
int main()
{
    SimpleArrayClass sac1;
    cout << "Enter size of the array: ";
    cin >> sac1.size;

    sac1.get(sac1.size);
    sac1.print();    
}