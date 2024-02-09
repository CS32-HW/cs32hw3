#include <string>
#include <cassert>
#include <iostream>
using namespace std;
#include "maze.cpp"

int main()
{
    string m1[10] = {
        "XXXXXXXXXX",
        "X....X...X",
        "XX.X.XXXXX",
        "X..X....XX",
        "XXXXX.X..X",
        "X.XX..XX.X",
        "X.X..XX..X",
        "X.X.X.X.XX",
        "X...X.X..X",
        "XXXXXXXXXX"
    };

    string m2[10] = {
        "XXXXXXXXXX",
        "X.X.X....X",
        "X.X.X.XXXX",
        "X.X.X....X",
        "X.X...X.XX",
        "X.X.X.X.XX",
        "XXXXXXX.XX",
        "XX....X..X",
        "X..XX...XX",
        "XXXXXXXXXX"
    };

    string m3[10] = {
        "XXXXXXXXXX",
        "X.....X..X",
        "X.XXX.XX.X",
        "X..X.....X",
        "XXXXXXX.XX",
        "X..X..X..X",
        "X.XX.XXXXX",
        "X.X.....XX",
        "X...XXX..X",
        "XXXXXXXXXX"
    };

    string m4[10] = {
        "XXXXXXXXXX",
        "X...X....X",
        "X.X.XX.XXX",
        "X.X....X.X",
        "XXXXXX.X.X",
        "X.X....X.X",
        "X.X.XXXX.X",
        "X...X....X",
        "XX.XX.XX.X",
        "XXXXXXXXXX"
    };

    assert(pathExists(m1, 10, 10, 1, 2, 8, 8));
    //assert(!pathExists(m1, 10, 10, 1, 7, 7, 1));
    assert(pathExists(m2, 10, 10, 8, 2, 1, 8));
    //assert(!pathExists(m2, 10, 10, 8, 1, 3, 1));
    assert(pathExists(m3, 10, 10, 1, 2, 5, 8));
    //assert(!pathExists(m3, 10, 10, 7, 3, 4, 7));
    assert(pathExists(m4, 10, 10, 8, 2, 1, 6));
    //assert(!pathExists(m4, 10, 10, 7, 6, 1, 2));
    cout << "All tests passed"; 
}
