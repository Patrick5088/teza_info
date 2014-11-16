/*
33. Scrieţi un program C/C++ care citeşte de la tastatură două caractere c1 şi c2 (litere
distincte ale alfabetului englez), şi un text având cel mult 250 caractere (doar spaţii şi litere
ale alfabetului englez), pe care îl modifică înlocuind toate apariţiile caracterului memorat în
c1 cu cel memorat în c2 şi toate apariţiile caracterului memorat în c2 cu cel memorat în c1.
Programul afişează pe linii separate ale ecranului atât textul iniţial cât şi textul obţinut după
efectuarea înlocuirilor. (10p.)
Exemplu: dacă pentru c1 se citeşte a, pentru c2 se citeşte o iar textul citit este:
hocus pocus preparatus
se va afişa :
hocus pocus preparatus
hacus pacus preporotus
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream in("input.in");
void citire(char a[300], char &c1, char &c2)
{
    in.get(a, 300);
    cin>>c1>>c2;
}
void inlocuire(char a[300], char c1, char c2)
{
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]==c1)
            a[i]=c2;
        else
            if(a[i]==c2)
                a[i]=c1;
    }
}
void afisare(char a[300])
{
    cout<<"\nNoul sir:\n";
    cout<<a;
}
int main()
{
    char a[300], c1, c2;
    citire(a, c1 ,c2);
    inlocuire(a, c1 ,c2);
    afisare(a);
}
