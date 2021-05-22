#include <iostream>
#include <moduleskhovrenko.h>
#include <cmath>

using namespace std;

int main()
{
    cout << "Testing for task_9_1" << endl;
    double input_9_1[12] = {0, 100, 200, 199, 99.99, 500, 499, 1000, 999, 5000, 2500, 10000};
    short output_9_1_bonus[12] = {0, 1, 5, 1, 0, 10, 5, 50, 10, 300, 150, 300};
    double output_9_1_pay[12] = {0, 99.75, 198.75, 198.75, 99.99, 497.50, 497.75, 987.50, 996.50, 4925.00, 2462.50, 9925.00};
    for (int i = 0; i<12; i++)
    {
        if (Bonus9_1(input_9_1[i]).bonus == output_9_1_bonus[i] && Bonus9_1(input_9_1[i]).pay == output_9_1_pay[i])
            cout << "Test Case #" << i+1 << " is Passed! (Input: " << input_9_1[i] << ", Output: " << Bonus9_1(input_9_1[i]).bonus << ",  " << Bonus9_1(input_9_1[i]).pay << ")" << endl;
        else
             cout << "Test Case #" << i+1 << " is Failed... (Input: " << input_9_1[i] << ", Output: " << Bonus9_1(input_9_1[i]).bonus << ",  " << Bonus9_1(input_9_1[i]).pay << ")" << endl;
    }

     cout << "\nTesting for task_9_2" << endl;
     float input_9_2[8] = {0, -100, 125.75, 1, 64, 5000, -273, 100};
     float output_9_2[8] = {-17.7778, -73.3333, 52.0833, -17.2222, 17.7778, 2760, -169.444, 37.7778};
     for (int i = 0; i<8; i++)
     {
         if (fabs(Temperature9_2(input_9_2[i]) - output_9_2[i]) < 0.001)
         //if (Temperature9_2(input_9_2[i]) == output_9_2[i])
            cout << "Test Case #" << i+1 << " is Passed! (Input: " << input_9_2[i] << ", Output: " << output_9_2[i] << ")" << endl;
         else
            cout << "Test Case #" << i+1 << " is Failed... (Input: " << input_9_2[i] << ", Output: " << output_9_2[i] << ")" << endl;
     }

     cout << "\nTesting for task_9_3" << endl;
     int input_9_3[10] = {1, 12, 2020, 0, 51950, 26, 360, 32, 64, 16};
     int output_9_3[10] = {0, 2, 4, 0, 6, 3, 5, 5, 6, 1};
     for (int i = 0; i<10; i++)
     {
        if (Binary9_3(input_9_3[i]) == output_9_3[i])
           cout << "Test Case #" << i+1 << " is Passed! (Input: " << input_9_3[i] << ", Output: " << output_9_3[i] << ")" << endl;
         else
            cout << "Test Case #" << i+1 << " is Failed... (Input: " << input_9_3[i] << ", Output: " << output_9_3[i] << ")" << endl;
     }

    cin.clear();
    cin.get();
    cin.get();

    return 0;
}
