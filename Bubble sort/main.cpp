#include <iostream>

int sort(int array[], int size);

int main(){

    int array[] = {10 , 8 , 9 , 4 , 1 , 5 , 3 , 2 , 6 };
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for(int arrays : array){
        std::cout << arrays <<" ";
    }


    return 0;
}

int sort(int array[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    return 0;

}