#include<iostream>
using namespace std;
int main(){
    int arr[50], size, no, i, pos;
    cout<<"Enter array size: ";
    cin>>size; //4
    cout<<"Enter array elements: ";
    for(i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter elements to be inserted: ";
    cin>>no; //6
    cout<<"Enter the index at which you want to insert new number: ";
    cin>>pos; //2
    if(pos<size){
        for(i=size; i>pos; i--){ //i=4; i>2 i--
            arr[i]=arr[i-1];  //arr[4]= arr[3] copy previous element to new index
        }
        arr[pos]=no;  // 2= 6
    }
    else{
        arr[pos]=no; // Like input last index
    }

    cout<<"Element inserted succesfully: "<<endl;
    cout<<"New array after new number insertion is: ";
    for(i=0; i<size+1; i++){
        cout<<arr[i]<<" ";   // Output elements
    }
    return 0;
}