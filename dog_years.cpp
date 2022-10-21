#include <iostream>

int main() {
// the variables that show the years
    int dog_years = 10;
    
    
    // the first two years of a dog's life
    int early_years = 21;
    
    // the later years of a dog's life
    int later_years = (dog_years -2) * 4;
    
    // the years of a dog after you add the early years + later years 
    int human_years = early_years + later_years;

    std::cout << "my name is Jody! Ruff ruff, I am " << human_years<< " years old in human years.\n";

    std::cout << "\n";
}

