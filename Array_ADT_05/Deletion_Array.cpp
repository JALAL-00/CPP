#include<iostream>
//#include<conio.h>
using namespace std;
int main(){
    int arr[50], size, no, i, pos, found=0;
    cout<<"Enter array size: ";
    cin>>size; // 4
    cout<<"Enter the element of array: ";
    for(i=0; i<size; i++){
        cin>>arr[i]; // 1 2 3 4
    }
    cout<<"Enter the element to be delete: ";
    cin>>no; // 2
    for(i=0; i<size; i++){ // Loop for arry all elements
        if(arr[i]==no){ //check array elements which index is equal with  no=2, we found at index 1, so arr[1]=2 
            for(int j=i; j<(size-1); j++){ // j=1; 1<3; i++  
                arr[j]=arr[j+1]; // arr[1]=1[2], arr[2]=arr[3]  shifting by copying, Loop check for all elements
            }
            found++; // Found=1 by incrementing
            break;
        }
    }
    if(found==0){
        cout<<"The element: "<<no<<"is not found in the array: "<<endl;
    }
    else{
        cout<<"The element is deleted successfully: "<<endl;
        for(i=0; i<size-1; i++){
            cout<<arr[i]<<" "; //Printig elements
        }
    }
    return 0;
}