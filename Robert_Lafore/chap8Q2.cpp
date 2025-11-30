/*. Write a program that substitutes an overloaded += operator for the overloaded + operator
in the STRPLUS program in this chapter. This operator should allow statements like
s1 += s2;
where s2 is added (concatenated) to s1 and the result is left in s1. The operator should
also permit the results of the operation to be used in other calculations, as in
s3 = s1 += s2;*/

#include <iostream>
#include <string>
using namespace std;

class Str
{
public:
    string s;

    void add(Str st)
    {
        s = s + st.s;
    }

    void get()
    {
        cin >> s;
    }
    void show()
    {
        cout << s << endl;
    }
};

int main()
{
    Str s1, s2;
    s1.get();
    s2.get();
    s1.add(s2);
    s1.show();
    return 0;
}
