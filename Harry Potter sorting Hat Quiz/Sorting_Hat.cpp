#include <iostream>

int main() {
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1 = 0;
    int answer2 = 0;
    int answer3 = 0;
    int answer4 = 0;

    std::cout<<"Hello Muggle, you have started \"The Sorting Hat Quiz\"\n\n\n";

    std::cout<<"When I'm dead, I want people to remember me as:\n1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n";
    
    std::cin>> answer1;
    if(answer1 ==1){
        ++hufflepuff;
    }
    
    else if(answer1 ==2){
        ++slytherin;
    }
    else if(answer1 ==3){
        ++ravenclaw;
    }
    else if(answer1 ==4){
        ++gryffindor;
    }
    else{
        std::cout<<"Invalid input\n";
    }

    std::cout<<"Dawn or Dusk?\n1) Dawn\n2) Dusk\n";
    std::cin>> answer2;
    if(answer2 == 1){
        ++gryffindor;
        ++ravenclaw;
    }
    else if (answer2 == 2){
        ++hufflepuff;
        ++slytherin;
    }
    else {
        std::cout<<"Invalid input\n";
    }
    std::cout<<hufflepuff<<slytherin<<ravenclaw<<gryffindor;
    
}
