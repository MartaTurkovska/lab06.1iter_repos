#include <iostream>  
#include <iomanip>

using namespace std;



void array_create(int* arr, const int min, const int max, const int size)
{

    for (int i = 0; i < size; i++)
    {

        arr[i] = min + rand() % (max - min + 1);

    }

}
void array_out(int* arr, const int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << setw(4) << arr[i];

    }
    cout << endl;
}
int array_count(int* arr, int const size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 6 == 0 || i % 5 != 0)
            count += 1;

    }
    return count;
}

int sum_element(int* arr, int const size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 6 == 0 || i % 5 != 0)
            sum += arr[i];
    }
    return sum;
}

void zero_elements(int* arr, int const size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 6 == 0 || i % 5 != 0)
            arr[i] = 0;
    }


}

int main() {
    srand((unsigned)time(NULL));
    const int n = 25;
    int r[n];

    const int max = 73;
    const int min = 4;

    array_create(r, min, max, n);
    array_out(r, n);

    cout << endl;

    array_count(r, n);
    int num = array_count(r, n);
    cout << "The number of elements that are multiples of 6 or with indices : except for multiples of 5 = " << num << endl;;

    cout << endl;


    sum_element(r, n);
    int sum = sum_element(r, n);
    cout << "The sum of elements that are multiples of 6 or with indices : except for multiples of 5 = " << sum << endl;;


    cout << endl;

    zero_elements(r, n);
    array_out(r, n);


}