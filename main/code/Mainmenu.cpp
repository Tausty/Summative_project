#include<iostream>
#include<conio.h>
#include<ncurses.h>

using namespace std;
int main()
{
    char key_press;
    int ascii_value;

    while(1)
    {
    key_press=getch();
    cout<<key_press;
    ascii_value=key_press;
    //
   cout<<"\t\t\tKEY Pressed � -> \" "<<key_press<<" \" Ascii Value =  "<<ascii_value<<"\n\n";
    }
    return 0;
}

int main3()
{
    const char* x[14][38] = {
    {"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"}, 
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," ","P"," ","L"," ","A"," ","Y"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," ",">"," ","A","r","t","i","f","a","c","t","s"," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," ","C","h","a","r","a","c","t","e","r"," ","S","e","l","e","c","t"," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"|"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","|"},
    {"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-"}};
    
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 38; j++)
        {
            cout << x[i][j];
        }
        cout << '\n';
    }
}
