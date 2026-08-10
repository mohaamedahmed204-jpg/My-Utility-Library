#include <iostream>
#include "clsUtil.h"
#include "clsDate.h"

int main() {
    clsUtil::Srand();
    std::cout << clsUtil::RandomNumber(1, 10) << '\n';
    std::cout << clsUtil::GetRandChar(clsUtil::CapitalLetter) << '\n';
    std::cout << clsUtil::GenerateWord(clsUtil::MixChars, 8) << '\n';
    std::cout << clsUtil::GenerateKey(clsUtil::MixChars) << '\n';
    clsUtil::GenerateKeys(clsUtil::MixChars, 10);

    std::cout << "\n";

    //Swap Int
    int x = 10, y = 20;
    std::cout << x << " " << y << '\n';
    clsUtil::Swap(x, y);
    std::cout << x << " " << y << '\n' << '\n';

    //Swap double
    double a = 10.5, b = 20.5;
    std::cout << a << " " << b << '\n';
    clsUtil::Swap(a, b);
    std::cout << a << " " << b << '\n' << '\n';

    //Swap String
    std::string s1 = "Ali", s2 = "Ahmed";
    std::cout << s1 << " " << s2 << '\n';
    clsUtil::Swap(s1, s2);
    std::cout << s1 << " " << s2 << '\n' << '\n';

    //Swap Dates
    clsDate d1(1, 10, 2022), d2(1, 1, 2022);
    std::cout << d1.DateToString() << " " << d2.DateToString() << '\n';
    clsUtil::Swap(d1, d2);
    std::cout << d1.DateToString() << " " << d2.DateToString() << '\n';

    std::cout << '\n';

    //Shuffl Array

    //int array
    int Arr1[5] = { 1,2,3,4,5 };
    clsUtil::ShuffleArray(Arr1, 5);

    std::cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << Arr1[i] << ' ';
    }

    std::cout << '\n';

    //string array
    std::string Arr2[5] = { "Ali","Fadi","Ahmed","Qasem","Khalid" };
    clsUtil::ShuffleArray(Arr2, 5);

    std::cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << Arr2[i] << ' ';
    }


    std::cout << '\n'; 


    int Arr3[5];
    clsUtil::FillArrayWithRandNum(Arr3, 5, 20, 50);
    std::cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << Arr3[i] << '\n';
    }

    std::cout << '\n';

    std::string Arr4[5];
    clsUtil::FillArrWithRandWords(Arr4, 5, clsUtil::MixChars, 8);
    std::cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << Arr4[i] << '\n';
    }

    std::cout << '\n';

    std::string Arr5[5];
    clsUtil::FillArrayWithRandKeys(Arr5, 5, clsUtil::MixChars);
    std::cout << "\nArray after filling keys:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << Arr5[i] << '\n';
    }

    std::cout << '\n';

    std::cout << "\nText1 " << clsUtil::Seperator(5, '\t') << "Text2\n\n";

    const int EncryptionKey = 2; //this is the key.

    std::string TextAfterEncryption, TextAfterDecryption;
    std::string Text = "Mohammed Abu-Hadhoud";
    
    std::cout << "\nText Before Encryption : ";
    std::cout << Text << '\n';
    
    TextAfterEncryption = clsUtil::Encryption(Text, EncryptionKey);
    std::cout << "Text After Encryption  : ";
    std::cout << TextAfterEncryption << '\n';

    TextAfterDecryption = clsUtil::Decryption(TextAfterEncryption, EncryptionKey);
    std::cout << "Text After Decryption  : ";
    std::cout << TextAfterDecryption << '\n';

    return 0;
}

