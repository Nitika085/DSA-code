#include <iostream>
using namespace std;
struct arr
{
    int A[10];
    int size;
    int length;
};
void display(struct arr P)
{
    cout << "elements are" << endl;
    for (int i = 0; i < P.length; i++)
    {
        cout << P.A[i] << " ";
    }
}
void Append(struct arr *P, int x)
{
    if (P->length < P->size)
    {
        P->A[P->length++] = x;
    }
}
void insert(struct arr *arr1, int index, int x)
{
    if (index >= 0 && index <= arr1->length)
    {
        for (int i = arr1->length; i > index; --i)
        {
            arr1->A[i] = arr1->A[i - 1];
            arr1->A[index] = x;
            arr1->length++;
        }
    }
}

int main()
{
    struct arr P = {{2, 3, 4, 5, 6}, 10, 5};

    // Append(&P, 10);
   insert(&P,3,10);

    display(P);
}