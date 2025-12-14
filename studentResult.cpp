#include <iostream>
using namespace std;

class Student
{
public:
    virtual void calculateresult() = 0;
};

class Undergraduate : public Student
{
    int marks[5];

public:
    void getMarks()
    {
        cout << "Enter 5 subject marks for Undergraduate student: ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void calculateresult()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }

        double avg = sum / 5.0;

        cout << "Undergraduate Result: ";

        if (avg >= 40)

            cout << "Pass (" << avg << "%)" << endl;
        else
            cout << "Fail (" << avg << "%)" << endl;
    }
};

class Postgraduate : public Student
{
    int marks[3];
    int thesisMarks;

public:
    void getMarks()
    {
        cout << "Enter 3 course marks for Postgraduate student: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
        cout << "Enter thesis marks: ";
        cin >> thesisMarks;
    }

    void calculateresult()
    {
        int sum = thesisMarks;
        for (int i = 0; i < 3; i++)
            sum += marks[i];
        double avg = sum / 4.0;
        cout << "Postgraduate Result: ";
        if (avg >= 50)

            cout << "Pass (" << avg << "%)" << endl;
        else
            cout << "Fail (" << avg << "%)" << endl;
    }
};

int main()
{
    Student *s;

    Undergraduate ug;
    ug.getMarks();
    s = &ug;
    s->calculateresult();

    Postgraduate pg;
    pg.getMarks();
    s = &pg;
    s->calculateresult();

    return 0;
}
