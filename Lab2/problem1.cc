#include <iostream>
#include "problem1.h"
#include<string>

        /*===============================================================================
                                    PROBLEM 1
        ================================================================================*/

std::string encryption(std::string text, int p)

{
    std::string result = "";

    for (int i=0;i<text.length();i++)
    {

        if (isupper(text[i]))
            result += char(int(text[i]+p-65)%26 +65);

    else
        result += char(int(text[i]+p-97)%26 +97);
    }

    return result;
}


std::string decryption(std::string text, int p)
{
    std::string result = "";


    for (int i=0;i<text.length();i++)
    {

        if (isupper(text[i]))
            result += char(int(text[i]-p-65)%26 +65);

    else
        result += char(int(text[i]-p-97)%26 +97);
    }

    return result;
}
