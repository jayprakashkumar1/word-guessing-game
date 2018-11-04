// header files
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;    
// main function
int main()
{
    // word store
    // You can add more 5 digit word here 
    string strList[]=
   { 
    "about","above","abuse","actor","acute","admit","adopt","adult",
    "after","again","agent","agree","ahead","alarm","album","alert",
    "alike","alive","allow","alone","along","alter","among","anger",
    "began","begin","begun","being","below","civil","claim","class",
    "clean","drawn","dream","dress","drill","drink","drive","drove",
    "dying","error","event","every","flash","fleet","floor","fluid",
    "group","grown","guard","guess","hotel","house","index","inner",
    "input","issue","joint","jones","judge","known","stone","stood",
    "valid","value","video","virus","visit","vital","voice","write"

};
     // total word
     int n=sizeof(strList)/(sizeof(strList[0]));

    cout<<"\n            WORD GUESSING GAME              \n";
    cout<<"\nYou can quit anytime by entering : quit \n\n";
    // for random number generator
    srand(time(NULL));
    int count=0;
    string guess;
    // loop
    do
    {   // ranodom index
        int index=random()%n;
        // random position
        int ch1=random()%5;
        int ch2=random()%5;
        // chekcing for same
        while(ch2==ch1)
        ch2=random()%5;

        string str=strList[index];
        string originalStr=str;
        // replacing with *
        str[ch1]='*';
        str[ch2]='*';
        // showing 
        cout<<"word :  "<<str;
        cout<<"\nEnter your word guess : ";
        cin>>guess;
        // checking for quit
        if(guess.compare("quit")==0)
        {
            cout<<"\nYour total correct guess : "<<count<<endl;
            exit(0);
        }
        // winning condition
        if(guess.compare(originalStr)==0)
    {    cout<<"\n                   Your Guess is correct.\n";
         count++;
    }
    else 
    {
        cout<<"\n                   Your Guess is Incorrect.\n";
        cout<<"Correct word : "<<originalStr<<endl;
    }
    }while(1);
    // returning from main
    return 0;   
}
