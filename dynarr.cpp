#include<iostream>
int main(){
    int ** ptr {nullptr};
    int row {0};
    int col {0};
    std::cin >> row;
    std::cin >> col;
    ptr = new int* [row];
    for (int  i = 0; i < row; i++)
    {
        ptr[i] = new int[col];
    }

    for (size_t i = 0; i < row; i++)
    {
        delete[] ptr[i];
    }
    
     delete[] ptr;
}