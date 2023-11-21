#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;
    double test1, test2, test3, test4, test5;
    double average;

    string firstname;
    string lastname;

    inFile.open("test1.txt");

    if(!inFile){ //check if file exist
        cout<<"Cannot open the input file. "
            <<"The program terminates."<<endl;
        return 1;
    }

    outFile.open("testAvg.txt");

    outFile << fixed <<showpoint; // output the decimal number in a fixed decimal format, don't show the decimal point and the decimal part
    outFile << setprecision(2);

    cout << "Processing data" << endl;
    inFile >> firstname >> lastname;
    outFile << "Student name: "<<firstname<<" "<<lastname<<endl;

    inFile >> test1 >> test2 >> test3 >> test4 >> test5;
    outFile << "Test scores: "<<test1<<setw(6)<<test2<<setw(6) //setw -
                              <<test3<<setw(6)<<test4<<setw(6)
                              <<test5<<setw(6)<<endl;

    average = (test1 + test2 + test3 + test4 + test5)/5.0;

    outFile<<"Average test score: "<<setw(6)<<average<<endl;

    inFile.close();
    outFile.close();
    return 0;
}
