use std::env;

fn main() {
    ["USER", "SHELL", "TERM", "LANG"]
        .iter()
        .for_each(|var| println!("{}: {}", var, env::var(var).unwrap_or_default()));

    println!("\x1B[35mcolors: \x1B[0m\x1B[41m \x1B[42m \x1B[43m \x1B[44m \x1B[45m \x1B[0m");
}
