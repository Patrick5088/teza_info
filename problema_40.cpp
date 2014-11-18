/*
    40. Un şir cu maximum 255 de caractere conţine cuvinte separate prin câte un spaţiu. Cuvintele
sunt formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care
citeşte de la tastatură un astfel de şir şi îl afişează pe ecran modificat, inversând prin
oglindire doar cuvintele care încep cu vocală, ca în exemplu. Se consideră ca fiind vocale
următoarele litere: a, e, i, o, u.
Exemplu: pentru şirul: maine este proba la informatica se va afişa:
maine etse proba la acitamrofni

*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("fisier.in");
int main()
{
    char a[100],*p,v[]="aeiou";
    int i,n;
    fin.get(a,100);
    cout<<a<<endl;
    p=strtok(a," ");
    while(p)
    {
        if(strchr(v,p[0]))
            strrev(p);
        cout<<p<<" ";
        p=strtok(NULL," ");
    }

    return 0;
}
