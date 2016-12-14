//
//  main.cpp
//  lection 3
//
//  Created by Andrey Zabara on 12/11/16.
//  Copyright © 2016 Andrey Zabara. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void isIntTwoDigit()
{
    int sum, number;
    std::string massage;
    printf("\n Enter two-digit integer number \n");
    scanf("%d", &number);
    sum = number % 10 + number / 10;
    massage = (sum / 10 ? "This is two-digit number \n" : "This is one-digit number \n");
    printf("\n The sum of the number of: %d \n %s", sum, massage.c_str());
}
void divider(){
    int first, second;
    std::string massage;
    printf("\n Enter two number \n");
    printf("\t First: ");
    scanf("%d", &first);
    printf("\t Second: ");
    scanf("%d", &second);
    massage = (first > second && (first % second) == 0 ? "second number \n" : (second % first) == 0? "first number" : "we don't have divider");
    printf("\n Do we have divider? - %s \n", massage.c_str());
}

int main()
{
    short funct;
    printf("\n Select function: \n");
    printf("\t1\tIs number sum is two-digit\n");
    printf("\t2\tWho divisor of two integers\n");
    scanf("%hd", &funct);

    switch (funct) {
        case 1: {
            isIntTwoDigit();
            break;
        }
        case 2: {
            divider();
            break;
        }

        default: {
            printf("\n The stars say that you need to read your horoscope and make another selection! \n");;
        }
    }
    return 0;
}


