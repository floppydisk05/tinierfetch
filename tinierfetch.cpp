#include <iostream>
#define e getenv
#define p <<
int main() { std::cout p "\e[31muser:\e[0m " p e("USER") p "\n\e[32msh:\e[0m " p e("SHELL") p "\n\e[33mterm:\e[0m " p e("TERM") p "\n\e[34mlocale:\e[0m " p e("LANG") p "\n\x1b[35mcolors: \x1b[0m\x1b[41m \x1b[42m \x1b[43m \x1b[44m " "\x1b[45m \x1b[0m\n"; return 0;}
