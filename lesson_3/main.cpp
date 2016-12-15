//
//  main.cpp
//  lection 3
//
//  Created by Andrey Zabara on 12/11/16.
//  Copyright © 2016 Andrey Zabara. All rights reserved.
//

#include <iostream>
#include <string>
#include<math.h>

using namespace std;

void isIntTwoDigit() {
    int sum, number;
    std::string massage;
    printf("\n Enter two-digit integer number \n");
    scanf("%d", &number);
    sum = number % 10 + number / 10;
    massage = (sum / 10 ? "This is two-digit number \n" : "This is one-digit number \n");
    printf("\n The sum of the number of: %d \n %s", sum, massage.c_str());
}

void divider() {
    int first, second;
    std::string massage;
    printf("\n Enter two number \n");
    printf("\t First: ");
    scanf("%d", &first);
    printf("\t Second: ");
    scanf("%d", &second);
    massage = (first > second && (first % second) == 0 ? "second number \n" : (second % first) == 0 ? "first number"
                                                                                                    : "we don't have divider");
    printf("\n Do we have divider? - %s \n", massage.c_str());
}

void findLargerNumber() {
    float n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    (n1 == n2 ? cout << "Numbers are equal. \n" : (n1 > n2 ? cout << "Largest number: " << n1 : cout
            << "Largest number: " << n2));
    cout << '\n';
}

void halfTheSum() {
    int x, y;
    cout << "Enter two number: ";
    cin >> x >> y;
    (x < y ?
     cout << endl << "x= " << (x + y) / 2 << endl << "y= " << 2 * (x + y) << endl
           :
     cout << "x= " << 2 * (x + y) << endl << "y= " << (x + y) / 2 << endl
    );

}

void coordinatesOfTheCircle() {
    int x0, y0, r, x1, y1, a, b;

    printf("Enter coordinate of the center x: ");
    scanf("%d", &x0);
    printf("Enter coordinate of the center y: ");
    scanf("%d", &y0);

    printf("Radius: ");
    scanf("%d", &r);

    printf("Enter coordinate of poin for check X: ");
    scanf("%d", &x1);
    printf("Enter coordinate of poin for check Y: ");
    scanf("%d", &y1);

    a = (x0-x1);
    b = (y0-y1);
//Если квадрат линии, идущей из центра к введённой точке
//меньше или равен квадрату радиуса значит принадлежит
    (pow(a,2)+pow(b,2) <= pow(r,2)) ? printf("Belongs.\n") : printf("Do not belong.\n");
}

int main() {
    short funct;
    printf("\n Select function: \n");
    printf("\t1\tIs number sum is two-digit\n");
    printf("\t2\tWho divisor of two integers\n");
    printf("\t3\tFind a larger number of two\n");
    printf("\t4\tFind the smaller of these two numbers and replace it with their half-sumof two\n");
    printf("\t5\tWhether this is a point inside the circle centered at the origin\n");
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
        case 3: {
            findLargerNumber();
            break;
        }
        case 4: {
            halfTheSum();
            break;
        }
        case 5: {
            coordinatesOfTheCircle();
            break;
        }

        default: {
            printf("\n The stars say that you need to read your horoscope and make another selection! \n");;
        }
    }
    return 0;
}


