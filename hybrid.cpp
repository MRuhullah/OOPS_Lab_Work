#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;
    string name;

public:
    student() : name(""), roll_no(0) {}

    void details()
    {
        cout << "Enter name:" << endl;
        getline(cin, name);

        cout << "Enter roll number:" << endl;
        cin >> roll_no;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};
class sports : virtual public student
{
protected:
    int spscore;

public:
    sports() : spscore(0) {}

    void sportsinfo()
    {
        cout << "Enter sports score(out of 10):" << endl;
        cin >> spscore;
    }

    void sportsdisplay()
    {
        cout << "Sports Score: " << spscore << endl;
    }
};
class academics : virtual public student
{
protected:
    int acascore;

public:
    academics() : acascore(0) {}

    void acainfo()
    {
        cout << "Enter academic score(out of 10):" << endl;
        cin >> acascore;
    }

    void acadisplay()
    {
        cout << "Academics Score: " << acascore << endl;
    }
};

class result : public sports, public academics
{
private:
    int finalscore;

public:
    result() : finalscore(0) {}

    void calculate_score()
    {
        finalscore = (spscore + acascore) / 2;
    }

    void finaldisplay()
    {
        calculate_score();
        display();
        sportsdisplay();
        acadisplay();
        cout << "Overall performance: " << finalscore << endl;
    }
};
int main()
{
    result r;
    r.details();
    r.sportsinfo();
    r.acainfo();
    cout << "STUDENT PERFORMANCE: " << endl;
    r.finaldisplay();

    return 0;
}
