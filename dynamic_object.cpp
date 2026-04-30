// Create a dynamic object named dhoni of the following class. Don’t use a constructor here, that means you need to fill the data by yourself.
// Cricketer
// {
// 	jersey_no;
// 	country;
// }
// Then make another dynamic object named kohli and copy the data of the dhoni object to kohli and after that delete the dhoni object. Then print the jersey_no and country of kohli object.
// Note: At first try to do this, kohli=dhoni and see if it gives the correct output. If not, then think deeply why it didn’t work and try to copy the data manually like kohli->jersey_no=dhoni->jersey_no; 
#include<bits/stdc++.h>
using namespace std;
class Footballer {
    public :
    int jersy_no;
    string country;
};
int main(){
    Footballer* Ronaldo = new Footballer;
    Footballer* Yamal = new Footballer;
    Ronaldo->country = "Portugal";
    Ronaldo->jersy_no = 7;
    Yamal->country = "Spain";
    Yamal->jersy_no = 10;
    *Ronaldo = *Yamal;
    delete Yamal;
    cout << Ronaldo->country << " " << Ronaldo->jersy_no << endl;
    delete Ronaldo;

    


}