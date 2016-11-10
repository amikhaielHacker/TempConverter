//
//  CommandLineTool.cpp
//  CommandLineTool
//
//  Created by adi on 31.10.16.
//  Copyright © 2016 NewerDeveloper. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <curses.h>

using namespace std;

void delay(int seconds)
{
    clock_t wait;
    wait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < wait) {}
    
}
void printAuthorAndOthers() {
    cout << "This Program is built by Mikhaiel Adrian... \nChanging or copy the code doesn't make you the dev. \nI hope you'll like my project.\nPlease Capitalize Your Text." << endl;
}
void CelsiusToFahrenheit()
{
    int timeWaiting = 1;
    float temp;
    printAuthorAndOthers();
    cout << "Press any key to continue..." << endl;
    getchar();
    cout << "Convert your value to F°..." << endl;
    delay(timeWaiting);
    cout << "Enter your C° Value:" << endl;
    cin >> temp;
    cout << (temp + 32) * 1.8 << endl;
}
void FahrenheitToCelsius()
{
    int timeWaiting = 1;
    float temp;
    cout << "Press any key to continue..." << endl;
    getchar();
    cout << "Convert your value to C°..." << endl;
    delay(timeWaiting);
    cout << "Enter your F° Value:" << endl;
    cin >> temp;
    cout << (temp - 32) / 1.8 << endl;
}
void FahrenheitToKelvin()
{
    int timeWaiting = 1;
    float temp;
    cout << "Press any key to continue..." << endl;
    getchar();
    cout << "Convert your value to K..." << endl;
    delay(timeWaiting);
    cout << "Enter your F° Value:" << endl;
    cin >> temp;
    cout << ((temp - 32) / 1.8) + 273 << endl;
}
void CelsiusToKelvin()
{
    int timeWaiting = 1;
    float temp;
    cout << "Press any key to continue..." << endl;
    getchar();
    cout << "Convert your value to K..." << endl;
    delay(timeWaiting);
    cout << "Enter your C° Value:" << endl;
    cin >> temp;
    cout << temp + 273 << endl;
}
void KelvinToCelsius()
{
    int timeWaiting = 1;
    float temp;
    cout << "Press any key to continue..." << endl;
    getchar();
    cout << "Convert your value to C°..." << endl;
    delay(timeWaiting);
    cout << "Enter your K Value:" << endl;
    cin >> temp;
    cout << ((temp - 273) + 32) / 1.8 << endl;
}
int main()
{
    printAuthorAndOthers();
    string output;
    cout << "Please type FC, FK or CF, CK or KF, KC..." << endl;
    cin >> output;
    if (output == "CF") {
        CelsiusToFahrenheit();
    }else if (output == "FC") {
        FahrenheitToCelsius();
    }else if (output == "FK") {
        FahrenheitToKelvin();
    }else if (output == "CK") {
        CelsiusToKelvin();
    }else if (output == "KC") {
        KelvinToCelsius();
    }
    else {
        cout << "Error: Please type FC, FK or CF, CK or KF, KC..." << endl;
        int i = 0;
        while (i < 11) {
            printf("\n\n\n\n\n\n\n\n\n\n");
            i++;
        }
        main();
        printf("\n\n\n\n\n");
    }
}
























