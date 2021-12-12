#include <iostream>
using namespace std;

int bsearch(int data, int array[], int first, int last)
{
    int middle;
    if (last < first)
        return -1;
     middle = first + (last - first) / 2;
    if (array[middle] == data)
        return middle;
    if (array[middle] < data)
    return bsearch(data, array, middle + 1, last);
    if (array[middle] > data)
    return bsearch(data, array, first, middle - 1);
}
int main()
{
    int value = 50;
    int array[] = {10, 20, 30, 40, 50, 60, 70};
    int result = bsearch(value,array, 0,6);
    if (result == -1)
        cout << "your number is not in Array\n";
        else
        cout << "your number is in the array in " << result <<" row";
        return 0;
}