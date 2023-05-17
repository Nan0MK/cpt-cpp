//Nan0MK's Cool Print Tools C++ edition
#pragma once
#include <iostream>

/*Reverse printer: Prints the given string in reverse*/
std::string RevPrint(std::string stringIn){
    std::string inserter;
    std::string stringOut;
    int i = stringIn.size()-1;
    while(i>=0){
        inserter = stringIn[i];
        stringOut.append(inserter);
        i--;
    }
    return stringOut;
}

/*Vertical printer: prints the given text vertically*/
void VertPrint(std::string stringIn){
    int i = 0;
    while(i<stringIn.size()){
        std::cout << stringIn[i] << std::endl;
        i++;
    }
}

/*Reverse vertical printer: prints the gien text vertically in reverse*/
void RevVertPrint(std::string stringIn){
    int i = stringIn.size()-1;
    while(i>=0){
        std::cout << stringIn[i] << std::endl;
        i--;
    }
}

/*Diagonal printer: prints the given text diagonally*/
void DiagPrint(std::string stringIn){
    std::string space = " ";
    int i = 0;
    while(i<stringIn.size()){
        if(i>0){
            std::cout << space;
            space = space + " ";
        }
        std::cout << stringIn[i] << std::endl;
        i++;
    }
}

/*Reverse diagonal printer: prints the given text diagonally in reverse*/
void RevDiagPrint(std::string stringIn){
    std::string space = " ";
    int i = stringIn.size()-1;
    while(i>=0){
        if(i<stringIn.size()-1){
            std::cout << space;
            space = space + " ";
        }
        std::cout << stringIn[i] << std::endl;
        i--;
    }
}

/*Stagger printer: prints the given text staggered top and bottom*/
void StaggerPrint(std::string stringIn){
    bool UP = true;
    std::string topString;
    std::string botString;
    std::string inserter;
    int i = 0;
    int j = 0;

    while(j<stringIn.size()){
        if(UP){
            inserter = stringIn[i];
            topString.append(inserter);
            botString.append(" ");
            i++;
            j++;
            UP = false;
        }
        if(!UP){
            inserter = stringIn[i];
            botString.append(inserter);
            topString.append(" ");
            i++;
            j++;
            UP = true;
        }
    }
    
    std::cout << topString << std::endl;
    std::cout << botString << std::endl;
}

/*Reverse stagger printer: prints the given text staggered top and bottom
in reverse*/
void RevStaggerPrint(std::string stringIn){
    bool UP = true;
    std::string topString;
    std::string botString;
    std::string inserter;
    int i = stringIn.size()-1;
    int j = stringIn.size()-1;

    while(j>=0 && i>=0){
        if(UP){
            if(i>=0){
                inserter = stringIn[i];
                topString.append(inserter);
            }
            botString.append(" ");
            i--;
            j--;
            UP = false;
        }
        if(!UP){
            if(i>=0){
                inserter = stringIn[i];
                botString.append(inserter);
            }
            topString.append(" ");
            i--;
            j--;
            UP = true;
        }
    }
    
    std::cout << topString << std::endl;
    std::cout << botString << std::endl;
}
