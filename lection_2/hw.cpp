//
//  main.cpp
//  lection 3
//
//  Created by Andrey Zabara on 12/11/16.
//  Copyright © 2016 Andrey Zabara. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>
#include <time.h>


using namespace std;

void getTime() {
    cout << flush;
    int second = 0;
    short variant = 0, hours, minuts, sec;
    printf("\n Enter second from start last day: ");
    scanf("%d", &second);
    printf("\n Select variant: ");
    printf("\n\t1\t Hours: ");
    printf("\n\t2\t Minute: ");
    printf("\n\t3\t Second: ");
    scanf("%hd", &variant);
    minuts = second / 60;
    hours = minuts / 60;
    sec = (second - minuts * 60);
//    printf("Selected variant %d \n", variant);
    switch (variant) {
        case 1: {
            printf("hours: %d", hours);
//            cout << hours;
            break;
        }
        case 2: {
            printf("minuts: %d", minuts);
            break;
        }
        case 3: {
            printf("sec: %d", sec);
            break;
        }
        default: {
            printf("\n The stars say that you need to read your horoscope and make another selection! \n");
        }
    }
    cout << flush;
}

void weakeOfTheEear() {
    const short DAY_IN_WEAK = 7;
    short weak, days_left, day;
    printf("\n Enter the user enters the number of days elapsed since the beginning of the year: ");


    scanf("%hd", &day);
    weak = day / DAY_IN_WEAK;
    printf("\n A week passed: %hd", weak);
    days_left = day - weak * DAY_IN_WEAK;
    printf("\n Day left to end of the weak: %hd", days_left);

}

void isIntThreeDigit() {
    int number, tens, hundreds, units;
    std::string massage;
    printf("\n Enter tree-digit integer number \n");
    scanf("%d", &number);
    hundreds = number / 100;
    tens = (number - hundreds * 100) / 10;
    units = number % 10;

    printf("\n Number of units: %d ", units);
    printf("\n The number of tens: %d ", tens);
    printf("\n The number of hundreds: %d ", hundreds);
    printf("\n The sum of its digits: %d ", units + hundreds + tens);
    printf("\n The product of its digits: %d ", units * hundreds * tens);
}

void isIntFourDigit() {
    int number, tens, hundreds, units, thousands;
    std::string massage;
    printf("\n Enter four-digit integer number \n");
    scanf("%d", &number);
    thousands = number / 1000;
    hundreds = (number - thousands * 1000) / 100;
    tens = (number - hundreds * 100) / 10;
    units = number % 10;

    printf("\n Number of units: %d ", units);
    printf("\n The number of tens: %d ", tens);
    printf("\n The number of hundreds: %d ", hundreds);
    printf("\n The number of thousands: %d ", thousands);
    printf("\n The sum of its digits: %d ", units + hundreds + tens + thousands);
    printf("\n The product of its digits: %d ", units * tens * hundreds * thousands);
}

void areaOfTriangle() {
    float x0, y0, x1, y1, x2, y2;
    printf("\n Enter x0: ");
    scanf("%d", &x0);
    printf("\n Enter y0: ");
    scanf("%d", &y0);
    printf("\n Enter x1: ");
    scanf("%d", &x1);
    printf("\n Enter y1: ");
    scanf("%d", &y1);
    printf("\n Enter x2: ");
    scanf("%d", &x2);
    printf("\n Enter y2: ");
    scanf("%d", &y2);
    point A = {x0, y0};
    point B = {x1, y1};
    point C = {x2, y2};
    float p = (A.length(B) + A.length(C) + B.length(C)) / 2;
    float S = sqrt(p * (p - A.length(B)) * (p - A.length(C)) * (p - B.length(C)));
    cout << "p= " << p << endl;
    cout << "S= " << S << endl;

}

struct point {
    float x;
    float y;

    float length(point pt) {
        return sqrt(pow(pt.x - x, 2.0f) + pow(pt.y - y, 2.0f));
    }
};


int main() {
    short funct;
    printf("\n Select function: \n");
    printf("\t1\tDate \n");
    printf("\t2\tThe user enters the number of days elapsed since the beginning of the year.\n");
    printf("\t3\tEntered three-digit number and  sum and composition\n");
    printf("\t4\tEntered four-digit number and find the sum and composition\n");
    printf("\t5\tFind the area of a triangle by three points\n");
    scanf("%hd", &funct);

    switch (funct) {
        case 1: {
            getTime();
            break;
        }
        case 2: {
            weakeOfTheEear();
            break;
        }
        case 3: {
            isIntThreeDigit();
            break;
        }
        case 4: {
            isIntFourDigit();
            break;
        }
        case 5: {
            areaOfTriangle();
            break;
        }

        default: {
            printf("\n The stars say that you need to read your horoscope and make another selection! \n");;
        }
    }
    return 0;
}


