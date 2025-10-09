#include <iostream>
using namespace std;
int strlength(char str[])
{
  int length = 0;
  while (str[length] != '\0')
  {
    length++;
  }
  return length;
}

void strrev(char str[])
{
  int length = strlength(str);
  for (int i = length; i >= 0; i--)
  {
    cout << str[i];
  }
}

void strconcat(char str1[], char str2[], char result[])
{
  
}
int main()
{
  char str1[100], str2[100], result[100];

  cout << "Enter the word: " << endl;
  cin >> str1;

  cout << "Length of word is: " << strlength(str1) << endl;

  cout << "Reverse of word is: ";
  strrev(str1);
  cout << endl;
}