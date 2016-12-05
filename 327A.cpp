#include <iostream>

using std::cout;
using std::endl;
using std::cin;

/*
    Kadane's algorithm
*/

int main(void)
{
    int n;
    cin >> n;
    short *arr = new short[n];

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    short *sum = new short[n];

    if(arr[0] == 0)
        sum[0] = 1;
    else
        sum[0] = 0;

    int max_index = 0;
    int max_value = 0;

    for(int i = 1; i < n; ++i)
    {
        short tmp = arr[i];
        if(tmp == 0)
            tmp = 1;
        else
            tmp = -1;
        sum[i] = sum[i - 1] + tmp;
        if(sum[i] < 0)
            sum[i] = 0;

        if(sum[i] > max_value)
        {
            max_value = sum[i];
            max_index = i;
        }
    }


    int j_index = max_index;
    int i_index = j_index;
    while(sum[i_index] != 0)
        i_index--;
    i_index++;

    if(i_index > j_index)
        i_index = j_index;


    for(int i = i_index; i <= j_index; ++i)
    {
        if(arr[i] == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    }

    int ones = 0;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == 1)
            ones++;
    }

    cout << ones << endl;

    delete[] arr;
    delete[] sum;

    return 0;
}
