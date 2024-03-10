
#include <iostream>
using namespace std;

int sum = 0 ;            // every num will be added from player1 or player2 will be collected here

void player_1()
{
    int choose_1 ;
    cout << "player1 : " ;
    while (true)
    {
        cin >> choose_1 ;
        if (choose_1 >= 0 && choose_1 <= 10)                   // check the number in the period (0 : 10) or not
         {
            sum = sum + int(choose_1) ;                        // update valu of sum by add the num which player1 enter
            cout << "the sum is : " << sum << endl;            // show the total to players 
                if (sum > 100 )                                // check the sum not greater than 100 or not 
                {
                    sum = sum - choose_1 ;                     // decreas value of sum becouse sum  become > 100   
                    cout << "wrong number the sum > 100\n" ;
                    cout << "the sum still be : " << sum << endl ; 
                    cout << "player1 try again : " ;
                    continue;
                }
            break ;
         }
         else 
         {
           cout << "wrong number it should be in range (0:10) \n" ;
           cout << "player1 try again : " ;
         }
    }      

}
void player_2()                               // similar to the first function
{
    int choose_2 ;
    cout << "player2 : " ;
    while (true)
    {
        cin >> choose_2 ;
        if (choose_2 >= 0 && choose_2 <= 10)
         {
            sum = sum + int(choose_2) ;
            cout << "the sum is : " << sum << endl;
            if (sum > 100 )
                {
                    sum = sum - choose_2 ;
                    cout << "wrong number the sum > 100\n" ;
                    cout << "the sum still be : " << sum << endl ;
                    cout << "player2 try again : " ;
                    continue;
                }
            break ;
         }
         else 
         {
           cout << "wrong number it should be in range (0:10) \n" ;
           cout << "player2 try again : " ;
         }
    }
}
int main ()
{
    while (true)
    {
        player_1() ;               // call the function to player1 start the game 
                     
            if(sum >=100)          // check if player1 win or not 
             {
                cout << "player_1 win" ;
                break;
             }
        player_2() ;                // call the function to player2 start the game

            if(sum >=100)           // check if player2 win or not
             {
                cout << "player_2 win" ;
                break;
             }
    }  
}
