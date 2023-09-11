package main

import "os"

func main() {
	e := []string{"USER", "SHELL", "TERM", "LANG"}
	c := []string{"31", "32", "33", "34"}
	r := "\033[0m"

	for i, v := range e {
		os.Stdout.WriteString("\033[0;" + c[i] + "m" + v + ":\033[0m " + os.Getenv(v) + "\n")
	}

	os.Stdout.WriteString("\033[35mcolors: \033[0m\033[41m \033[42m \033[43m \033[44m \033[45m " + r + "\n")
}
