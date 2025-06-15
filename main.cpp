#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRandomNumber(){
    static bool seed_initialized = false;
    if(!seed_initialized){
        std::srand(std::time(0));
        seed_initialized = true;
    }
    //guess number between 1 and 100
    int min=1, max=100;
    int random_num = (rand()%(max-min+1))+min;
    return random_num;
}
string getHint(int number, int guess){
    if(guess>(number+10)||guess<(number-10)){
    return "Cold";
    }
    
    else if(guess==number){
    return "Right";
    }
    
    else if((number-guess)<=10 || (guess-number)<=10){
    return "Hot";
    }
}
void guessNum(){
    int num = getRandomNumber();
    int user;
    while(true){
    cout<<"Enter number between 1 and 100: ";
    cin>>user;
    string str = getHint(num, user);
    if(str=="Right"){ 
        cout<<"You guessed it right!"<<endl;
        break;
    }
    else cout<<str<<endl;
    }
}
int main(){
    guessNum();
    return 0;
}
