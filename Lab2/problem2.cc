#include<iostream>
#include "problem2.h"
#include<string>

/*===============================================================================
                                  PROBLEM 2
  ================================================================================*/


class vig
    {
    public:
        std::string p;
        vig(std::string p)
        {
         for(int i=0; i<p.size(); i++)
         {
             if(p[i] >= 'A' && p[i] <= 'Z')
                 this->p += p[i];
             else if (p[i] >= 'a' && p[i] <= 'z')
                 this->p += p[i] + 'A' - 'a';
         }
        }
        std::string encryption(std::string p)
        {
            std::string outcome;
            for(int i=0, j=0; i<p.length(); i++)
            {
                char c = p[i];
                if(c >= 'a' && c <= 'z')
                    c += 'A' - 'a';
                else if(c < 'A' || c > 'Z')
                    continue;
                outcome += (c + p[j] - 2*'A')%26 + 'A';
                j = (j+1)%p.length();
            }
            return outcome;
        }
        std::string decryption(std::string p)
        {
            std::string outcome;
            for(int i=0, j=0; i<p.length(); i++)
            {
                char c = p[i];
                if(c >= 'a' && c <= 'z')
                    c += 'A' - 'a';
                else if(c < 'A' || c > 'Z')
                    continue;
                outcome += (c - p[j] + 26) % 26 + 'A';
                j = (j+1) % p.length();
            }
            return outcome;
        }
    };




