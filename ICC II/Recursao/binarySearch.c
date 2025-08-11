#include <stdio.h>

int binarySearch(int *sortedVector, int lenght, int i, int key){
    int halfWay = (i + lenght)/2;
    if(lenght < i){
        return -1;
    }
    if(sortedVector[halfWay] == key){
        return halfWay;
    }
    if(sortedVector[halfWay] < key){
        return binarySearch(sortedVector, lenght, ++halfWay, key);
    }
    return binarySearch(sortedVector, --halfWay, i, key);
}

int main(){
    int v[] = {1,2,4,6,7,8,9,12,54,85,99};

    printf("elemento no indice : %d \n", binarySearch(v, 11, 0, 12));

    return 0;
}