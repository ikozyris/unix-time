/*
MIT License

Copyright (c) 2022 Ioannis Kozyris

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <ctime> //for time_t
#include <iostream>
#include <unistd.h> //for sleep()

using namespace std;

int main()
{
   cout << "\033[2J\033[1;1H"; //clear screen escape code
    printf("Created by ikozyris.  @ikozyris on Github and Gitlab. This is a simple program that prints the current timestamp since the Unix Epoch. Also, it will start now!\n");
    sleep(7);

    while (1)
    {
    time_t result = time(nullptr); //time_t sets result to unix time
    cout << asctime(localtime(&result))
              << result << " seconds since the Unix Epoch\n";
    sleep(1);
    cout << "\033[2J\033[1;1H";
    }

}
