#include <iostream>
#include <fstream>
#include <string>
#include "class.h"
#include "functions.h"
using namespace std;
int main() {
    string date1;
    string dates[200];
    string text;
    string years;
    string textt;
    string datedate[200];
    string texttext[200];
    int textlength1, textlength2;
    date datee;
    int j=0;
    int i=0;
    int numberofquestions=0;
    string textforlength, line;

    cout <<endl;
    ifstream file("data.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            textforlength += line;
        }
        file.close();
    } else {
        cout << "Unable to open file";
        return 0;
    }
    int lengthh = textforlength.length();
    cout << "The length of the text in the file is: " << lengthh << endl;


    ifstream myfile("data.txt");
    if(myfile.is_open())
    {
        for (int i=0; i<lengthh; i++)
            myfile >> text[i];
    }
    else
        cout << "Unable to open file";









    for (int i=0; i<lengthh; i++)
        while (isdigit(text[i]))
        {
            datedate[j] = text[i];
            if (isdigit(text[i]))
                j++;
            i++;

        }
    while (i<lengthh)
    {
        texttext[j] = text[i];
        if (isdigit(text[i]))
            i++;
        else
        {
            i++;
            j++;
        }
    }
    for (int i=0; i<lengthh; i++)
    {
        if (texttext[i] == ".")
            texttext[i] = '\0';
        if (texttext[i] == ".")
            texttext[i] = '\0';
    }
    for (int i=0; i<lengthh; i++)
    {
        if (texttext[i] == "?")
            numberofquestions++;
    }



    cout <<"Number of questions is: "<<numberofquestions<<endl;
    cout <<endl;
    cout <<"  ";
    for (int i=0; i<lengthh; i++)
    {

        if (texttext[i-1]=="?")
            cout <<endl;
        cout << texttext[i];
    }
    cout <<endl;


    bool valid_date = false;
    for (int a=0; a<numberofquestions; a++)
    {
        cout <<"Question " <<a+1;
        cout <<endl;
        valid_date = false;
        while (!valid_date) {
            input_date(datee);
            valid_date = check_date(datee);
        }
    }

    cout <<"Answers:"<<endl;

    for (int i=0; i<lengthh; i++)
    {
        if (i % 8 == 0)
            cout << endl;
        if (datedate[i]!="\0")
        {
            if (i == 2 || i == 4 || i == 10 || i == 12 || i == 18 || i == 20 || i == 26 || i == 28 || i == 34 ||
                i == 36 || i == 44 || i == 46 i == 52 || i == 54 i == 60 || i == 62)
                cout << ".";
        }
        if (datedate[i]!="\0")
        cout << datedate[i];
        else
            return 0;
    }
    return 0;
}
