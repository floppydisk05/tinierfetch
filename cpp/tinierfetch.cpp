#include <iostream>
#define l getenv
#define i <<
int main() {
  std::cout i "\e[31muser:\e[0m " i l("USER") i "\n\e[32msh:\e[0m " i l("SHELL")
      i "\n\e[33mterm:\e[0m " i l("TERM") i "\n\e[34mlocale:\e[0m " i l("LANG")
          i "\n\x1b[35mcolors: \x1b[0m\x1b[41m \x1b[42m \x1b[43m \x1b[44m "
            "\x1b[45m \x1b[0m\n";
  return 0;
}
