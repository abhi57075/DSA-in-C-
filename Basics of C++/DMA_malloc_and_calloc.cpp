// DMA -> Dynamic Memory Allocation

# include <iostream>
# include <cstdlib>
using namespace std;

int main(){
    int n = 5;
    int *ptr = (int *)malloc(n*sizeof(int));
    for (int i = 0; i<n; i++){
        ptr[i] = i*2;
    }
    for (int i = 0; i<n; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    free (ptr);

    ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i<n; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    free (ptr);

    // dynamic creation and deletion of a variable
    int *var = new int;
    *var = 20;
    cout<<*var<<endl;
    delete var;

    // dynamic creation and deletion of array
    int *arr = new int[3];
    for (int i = 0; i < 3; i++){
        arr[i] = i*i;
    }
    for (int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete []arr;

}

/*
1. Malloc function:
-> This function is defined under <cstdlib> header file.
-> It is used to allocate a block of memory and returns a void pointer to the allocated memory block's first byte if the allocation succeeds

2. Calloc function:
-> This function is defined under <cstdlib> header file.
-> It works same as that of malloc with the only difference being that
-> it sets all the bits of the allocated memory to zero and returns a pointer to the allocated memory block's first byte if the allocation succeeds

Global variables are stored using heap memory
Heap memory -> dynamic memory allocation
Stack memory -> Compile time memory allocation
*/