/*
In a garden there are several apple tree planted in grid format.Each point (i,j) in the grid has |i|+|j| apples.
Alie can buy a square plot centered at (0,0). Find the minimum perimeter of plot (1 unit having length=1) such that she can collect atleast
X apples. All plants on the perimeter of the plot are also included.

Input Specification:
Input1: X denoting the number of apples Allie has to collect.

Output Specification:
Your function should return minimum perimeter of plot that should be brought by Alie.
*/
#include<iostream>
#include<cmath>
using namespace std;

int minGridPerimeter(int input1)
{
    int minApple=input1;
    double totalApples=0;
    int unit=0;

    while(minApple > totalApples)
    {
        unit++;
        totalApples+=12*pow(unit,2);
    }
    return unit*8;
}

int main()
{
    int input1=1;
    cout<<minGridPerimeter(input1)<<endl;
}