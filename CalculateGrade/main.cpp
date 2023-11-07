#include <iostream>
using namespace std;

void getScore(int& score);
void printGrade(int score);

int main() {
    int courseScore;
    cout << "Si programa skaiciuoja kurso pazymi, \n"
            "priklausomai kiek tasku yra surinkta" <<endl;
    getScore(courseScore);
    printGrade(courseScore);
    return 0;
}

void getScore(int& score)
{
    cout<<"Iveskite tasku kieki is kurso: ";
    cin >> score;
    cout <<endl<< "Kurso surinktu tasku kiekis "<<score<< endl;
}
void printGrade(int cScore)
{
    cout << "Jusu kurso pazymys yra ";
    if (cScore >= 95)
        cout<<"10"<<endl;
    else if (cScore >= 85)
        cout<<"9"<<endl;
    else if (cScore >= 75)
        cout<<"8"<<endl;
    else if (cScore >= 65)
        cout<<"7"<<endl;
    else if (cScore >= 55)
        cout<<"6"<<endl;
    else if (cScore >= 45)
        cout<<"5"<<endl;
    else
        cout<<"Neislaikyta"<<endl;
}
