#include<iostream>
using namespace std;

void bubble_sort(int myArray[]){
    for(int i = 0; i < 5; i++){

        for(int j = 0; j<5-i-1; j++ ){
            if(myArray[j] > myArray[j+1]){
                int num_behind = myArray[j+1];
                myArray[j+1] = myArray[j];
                myArray[j] = num_behind;
            }    
        }
    }

    for(int count = 0; count<5; count++){
        cout<<myArray[count]<<" ";
    }
    cout<<" "<<endl;
}

int main(){
    int _1_Array[5] = {9, 7, 3, 6, 2};
    bubble_sort(_1_Array);

    int _2_Array[5] = {70, 200, 300, 6000, 30};
    bubble_sort(_2_Array);

    int _3_Array[5] = {99, 11, 33, 66, 22};
    bubble_sort(_3_Array);

    return 0;
}