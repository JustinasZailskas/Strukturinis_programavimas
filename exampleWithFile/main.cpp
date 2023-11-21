#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

//papildoma funkcija
void functionAverage() {
    ifstream inFile;
    ofstream  outFile;
    int sum, num, average, count;
    string name;
    inFile.open("exp_21.txt");
    inFile>> name;
    while(inFile)
    {
        sum = 0;
        count = 0;
        inFile >> num;
        while(num != -999)
        {
            sum = sum + num;
            count++;
            inFile>>num;
        }
        if(count!= 0)
            average = sum /count;
        else
            average = 0;
        cout<< name <<" "<<average<<endl;
        inFile>> name;
    }
    inFile.close();
    outFile.close();
}

int main() {
    ifstream inFile;
    ofstream outFile;
    int counter, sum, num;
    counter = 0;

    inFile.open("exp_2.txt");
    outFile.open("exp_2_result.txt");
    while(counter < 4)
    {
        sum = 0;
        inFile>>num;
        while(num != -999)
        {
            sum = sum + num;
            inFile >> num;
        }
        cout << "Line " <<counter+1<<": Sum = "<<sum<<endl;
        outFile << "Line " <<counter+1<<": Sum = "<<sum<<endl;
        counter++;
    }
    inFile.close();
    outFile.close();
    functionAverage();//papildomos funkcijos kvietimas
    return 0;
}
