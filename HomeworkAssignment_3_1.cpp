#include <iostream>
#include <string>
using namespace std;

/**
* PURPOSE:
*   orders the characters alphabetically
* PARAMETER:
*   input, a string consisting of an array of elements of type char
* RETURN VALUE
*   a string of the ordered letters
*/
string separateLetters(string input)
{
    string aLetters;
    string bLetters;
    for(int i = 0; i < input.length(); i++)
    {
        if(static_cast<char>(input.at(i)) == 'a')
        {
            aLetters += input.at(i);
        }
        else
        {
            bLetters += input.at(i);
        }
    }

    return aLetters + bLetters;
}

int main()
{
    cout << separateLetters("abbbbbbbbaaaaaaa");
    return 0;
}
