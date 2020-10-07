// SnowLynx Interactive FizzBuzzer by Fluffy of Dvlsh::Sftwr in C++ Oct 5th 02:52 AM 2020

#include <iostream>
#include <cstring>

const std::string FIZ { "Fizz" },
                  BUZ { "Buzz" },
                  DOS { "cls" },
                  NIX { "clear" };

const short       MAX { 100 },
                  MIN { 0 }; 


void fizzBuzzer(short x, short y, short z);
void makeInteractive(void);
void laterHater(void);
void clearScreen(short OS);


int main (int argCnt, char** argVec) {
    short OS   { MIN };
    
    std::cout << "DOS or NIX?(1/2) : ";
    std::cin >> OS;
    
    if (strcmp(argVec[1], "-i") == 0 || strcmp(argVec[1], "--interactive") == 0) {
    
        if (OS < 1 || OS > 2)
            return EXIT_FAILURE;
        
        makeInteractive();
    }
    else if (strcmp(argVec[1], "-s") == 0 || strcmp(argVec[1], "--static") == 0) 
        fizzBuzzer(3, 5, 15);
    
    laterHater();
    clearScreen();
    
    return EXIT_SUCCESS;
}


void fizzBuzzer(short x, short y, short z) { 
    std::cout << std::endl;
    
    for (short cnt = MIN; cnt <= MAX; cnt++) {
        if (cnt % x == MIN)
            std::cout << FIZ << std::endl;
        
        else if (cnt % y == MIN)
            std::cout << BUZ << std::endl;
        
        else if (cnt % z == MIN)
            std::cout << FIZ << BUZ << std::endl;
        
        else std::cout << cnt << std::endl;
    }
}


void makeInteractive(void) {
    short num1 { MIN },
          num2 { MIN },
          num3 { MIN };
    
    std::cout << "Enter 3 numbers to fizz, buzz, or fizzbuzz by (ex: 3 5 15) : "; 
    
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;
    
    fizzBuzzer(num1, num2, num3);
}


void laterHater(void) {
    std::cout << "[{( Later Hater )}]\nPress Enter To Exit\n";
    std::cin.get();
    std::cin.get();
}

void clearScreen(short OS) {
    if (OS == 1)
        system(DOS.c_str());

    else if (OS = 2)
        system(NIX.c_str());
}
