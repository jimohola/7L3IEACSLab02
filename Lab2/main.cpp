#include <iostream>
#include<string>

#include "problem1.h"
#include "problem2.h"


int main()
{
    std::cout<<"Input your text to encryption : "<<std::endl;
        std::string text;
        std::cin>> text ;
        int p = 4;
        std::cout << "Text : " << text;
        std::cout << "\nCipher: " << encryption(text, p);
        std::cout<<"\nInput your the text to decryption : "<<std::endl;
        std::string text1;
        std::cin>> text1 ;
        std::cout <<"\nDecrption: "<<decryption (text1,p);
        std::cout <<"\n "<<decryption (text1,p);


     return 0;
}
