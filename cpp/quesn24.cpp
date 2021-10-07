//quesn 24 - water traped after raining
//amirul hasan
//CS20B1082

#include <iostream>
using namespace std;

class array
{
private:
    int *arr, *lmax, *rmax;
    int size;

public:
    array()
    {
        arr = lmax = rmax = NULL;
        int size = 0;
    }
    void createArr()
    {
        cout << "enter size of elevation map: ";
        cin >> size;
        arr = new int[size];
        lmax = new int[size];
        rmax = new int[size];
        cout << "enter elevation: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    int trapWater()
    {
        int water = 0;
        lmax[0] = arr[0];
        rmax[size - 1] = arr[size - 1];
        for (int i = 1; i < size; i++)
        {
            lmax[i] = max(arr[i], lmax[i - 1]);
        }
        for (int i = size - 2; i > -1; i--)
        {
            rmax[i] = max(arr[i], rmax[i + 1]);
        }
        for (int i = 1; i < size - 1; i++)
        {
            water += min(lmax[i], rmax[i]) - arr[i];
        }
        return water;
    }
    ~array() {}
};

int main()
{
    array obj;
    obj.createArr();
    int x = obj.trapWater();
    cout << "volume of water trapped between blocks = " << x << endl;
    return 0;
}