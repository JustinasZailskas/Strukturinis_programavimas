#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;

void initializeArray(int x[], int sizeX);
void fillArray(int x[], int sizeX);
void printArray(const int x[], int sizeX);
int sumArray(const int x[], int sizeX);
int indexLargestElement(const int x[], int sizeX);
void copyArray(const int x[], int y[], int length);

int main() {
    int listA[ARRAY_SIZE] = {0};
    int listB[ARRAY_SIZE];

    cout<<"Masyvo ListA elementai: "<<endl;
    printArray(listA, ARRAY_SIZE);
    cout<<endl;

    initializeArray(listB, ARRAY_SIZE);
    cout<<"Masyvo listB elementai "<<endl;
    printArray(listB, ARRAY_SIZE);
    cout<<endl;

    cout<<"Iveskite "<<ARRAY_SIZE<<" sveikuju skaiciu";
    fillArray(listA, ARRAY_SIZE);
    cout<< endl;

    cout<<"Po duomenu uzpildymo masyvas A elementai yra: "<<endl;
    printArray(listA, ARRAY_SIZE);
    cout<<endl;

    cout<<"Suma visu masyvo A elementu "
        <<sumArray(listA, ARRAY_SIZE)
        <<endl;

    cout<<"Pozicija didziausio elemento is masyvo yra "
        <<indexLargestElement(listA, ARRAY_SIZE)
        <<endl;

    cout<<"Didziausias elementas masyve yra: "3
        <<listA[indexLargestElement(listA, ARRAY_SIZE)]<<endl;

    copyArray(listA, listB, ARRAY_SIZE);
    cout<<"Po elementu kopijos ir masyvo A i masyva B"
        <<" masyvo elementai yra "<<endl;

    printArray(listB, ARRAY_SIZE);

    return 0;
}

void initializeArray(int list[], int listSize)
{
    int index;
    for(index = 0; index < listSize; index++){
        list[index] = 0;
    }
}

void fillArray (int list[], int listSize){
    int index;
    for(index = 0; index < listSize; index++){
        cin >> list[index];
    }
}

void printArray(const int list[], int listSize){
    int index;
    for(index = 0; index < listSize; index++){
        cout << list[index] << " ";
    }
}

int sumArray(const int list[], int listSize) {
    int index;
    int sum = 0;
    for(index = 0; index < listSize; index++){
        sum = sum + list[index];
    }
    return sum;
}
int indexLargestElement(const int list[], int listSize) {
    int index;
    int maxIndex = 0;
    for(index = 1; index < listSize; index++){
        if (list[maxIndex] < list[index])
            maxIndex = index;
    }
    return maxIndex;
}
void copyArray(const int listOne[], int listTwo[], int listOnesize) {
    int index;
    for(index = 0; index < listOnesize; index++){
        listTwo[index] = listOne[index];
    }
}
