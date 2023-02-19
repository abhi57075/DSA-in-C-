# include <iostream>
using namespace std;

int main(){
    int x = 2, y = 15;

    // Switch 
    switch(x){
        case 1:
        cout<<"One"<<endl;
        break;
        case 0:
        cout<<"Zero"<<endl;
        break;
        default: // default case may or may not be written
        cout<<"x is neither one nor zero."<<endl;
    }

    /*
    Goto
    2 syntaxes : 
        SYNTAX 1                         SYNTAX 2
        goto label;           |          label:
        ...                   |          ...
        ...                   |          ... 
        label:                |          goto label;
    */

    if(y%2==0){
        goto printEven; // Syntax 1 is followed.
    }
    else{
        goto printOdd;
    }
    printEven:
    cout<<"y is an even number"<<endl;

    printOdd:
    cout<<"y is an odd number"<<endl;

    // Continue
    int arr[] = {0,1,2,3,-4,-5,6,-7};
    int arr_size = 8;

    cout<<"Positive elements in the array are: ";
    for (int i = 0; i<arr_size; i++){
        if (arr[i]<0){
            continue; // Ather continue all other lines are not executed 
        }
        cout<<arr[i]<<" ";   
    }
    cout<<endl;

    //break
    cout<<"First n positive elements in the array are: ";
    for (int i = 0; i<arr_size; i++){
        if (arr[i]<0){
            break; // breaks the for loop
        }
        cout<<arr[i]<<" ";   
    }
    cout<<endl;

}