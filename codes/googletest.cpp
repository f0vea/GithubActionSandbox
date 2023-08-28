#include <iostream>
#include <vector>
#include "gtest/gtest.h"
#include "sort.h"
using namespace std;

int func(int i)
{
    return i;
}

TEST(SimpleFunc, fail)
{
    EXPECT_EQ(1, func(3)); // 1 neq 3, this is supposed to fail
}

TEST(SimpleFunc, success)
{
    EXPECT_EQ(1, func(1)); // 1 eq 1, this is supposed to succeed
}

TEST(Sort, insertion)
{
    vector<int> test = { 10, 20, 1, -1, -34, -10, -234 };
    vector<int> sorted = insertionSort(test);
    cout << endl;
    for(size_t i = 1; i < sorted.size(); i++){
        EXPECT_LE(sorted[i - 1], sorted[i]);
    }
}

// If you have a main func, it compiles, but the google tests never run, and only the main func is executed.
//int main(int argc, char** argv)
//{
    //return 0;
//}
