#include <iostream>
#include <iomanip>
using namespace std;
void SelectionSort (int array[],const int Size)
{
    int i,j, smallest , temp;
    for(i=0;i<Size;i++)
    {
        smallest=i;
        for (j=i;j<Size;j++)
        {
            if (array[smallest]>array[j])
            {
                smallest =j;
            }
        }
        temp=array[i];
        array[i];
        array[i]=array[smallest];
        array[smallest]=temp;
    }
}