//
// Created by Łukasz Zieniewicz on 14/08/2017.
//

#include "Level.h"
#include <random>


void Level::initialize(bool allVisible)
{
    for(int i = 0; i<WIDTH; i++){
        for(int j = 0; j<HEIGHT; j++){
            int rand = random() % 2;
            minesMatrix[i][j] = rand;
            visibilityMatrix[i][j] = allVisible;
            if(rand!=0)minesLeft++;
        }
    }
}

void Level::print()
{
    std::cout << "SAPER    mines left: " << minesLeft << std::endl;
    std::cout << "x ";
    for(int i = 0; i<WIDTH; i++){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i<WIDTH; i++){
        std::cout << i << " ";
        for(int j = 0; j<HEIGHT; j++){
            if(visibilityMatrix[i][j] == 0){
                std::cout << "# ";
            }else{
                if(minesMatrix[i][j]==0){
                    std::cout << "o ";
                }else{
                    std::cout << "x ";
                }
            }
        }
        std::cout << std::endl;
    }
}