#include <iostream>
using namespace std;

int main()
{
    //find smallest/largest index
    int arr[6] = {5, 9, -1, 7, 3, 12};

    int small = arr[0];
    int large = arr[0];

    int smallIndex = 0;
    int largeIndex = 0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] < small)
        {
            small = arr[i];
            smallIndex = i;
        }

        if(arr[i] > large)
        {
            large = arr[i];
            largeIndex = i;
        }
    }

    cout << "Smallest number = " << small << endl;
    cout << "Smallest index = " << smallIndex << endl;

    cout << "Largest number = " << large << endl;
    cout << "Largest index = " << largeIndex << endl;

    return 0;
}