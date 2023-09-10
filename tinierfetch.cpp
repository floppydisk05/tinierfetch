#include <iostream>
#define e getenv
using namespace std;int main(){cout<<"\e[31muser:\e[0m "<<e("USER")<<"\n\e[32msh:\e[0m "<<e("SHELL")<<"\n\e[33mterm:\e[0m "<<e("TERM")<<"\n\e[34mlocale:\e[0m "<<e("LANG")<<"\n\e[35mcolors:\e[0m\e[41m  \e[42m  \e[43m  \e[44m  \e[45m  \e[0m\n";}
