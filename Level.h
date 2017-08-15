//
// Created by Łukasz Zieniewicz on 14/08/2017.
//

#include <iostream>

#ifndef SAPER_LEVEL_H
#define SAPER_LEVEL_H

//visibilityMatrix[i][j]==0 - invisible
//visibilityMatrix[i][j]==1 - visible

//minesMatrix[i][j]==0 - empty
//minesMatrix[i][j]==1 - mine



class Level
{
public:
    const static int WIDTH = 10;
    const static int HEIGHT = 10;
    void initialize(bool allVisible = false);
    void print();
private:
    int visibilityMatrix[WIDTH][HEIGHT];
    int minesMatrix[WIDTH][HEIGHT];
    int minesLeft = 0;
};


#endif //SAPER_LEVEL_H
