# tinierfetch

> a self-imposed code-golf challenge on following qualifiers

1. speed
2. binary size
3. compilation duration
4. (optional) lines of code

![preview](./assets/preview.png)

## depends

you will need `TERM`, `LANG`, `USER`, `SHELL` environmental variables to be set, they usually are.

- for C++, see the Makefile for available jobs.
- for Rust, the `--release` profile handles the optimizations for you
- for Go, you will want to pass `-ldflags="-s -w"` to `go build`

## usage

a helper script is provided below. it will build each program and compare them using Hyperfine

_it fits in a [QR code](./assets/qr.png)_

## todo

- more languages:
  - bash
  - zig
  - python
  - ruby
  - haskell
  - asm
  - node

## results

| Command                     | Mean [ms] | Min [ms] | Max [ms] |    Relative | Compilation Duration [s] |                  Notes                   |
| :-------------------------- | :-------: | -------: | -------: | ----------: | -----------------------: | :--------------------------------------: |
| `bin/tinierfetch-go`        | 1.3 ± 0.1 |      1.1 |      1.6 | 1.23 ± 0.12 |                     0.15 |      `-s` and `-w` ldflags are used      |
| `bin/tinierfetch-rs`        | 1.1 ± 0.1 |      0.9 |      1.3 |        1.00 |                     3.17 | see `Cargo.toml` for opitimization specs |
| `bin/tinierfetch-cpp-size`  | 1.5 ± 0.1 |      1.3 |      1.8 | 1.43 ± 0.11 |                     0.24 |      g++ optimized for binary size       |
| `bin/tinierfetch-cpp-speed` | 1.5 ± 0.1 |      1.3 |      1.8 | 1.43 ± 0.11 |                     0.10 |         g++ optimized for speed          |

_all programs take around `0.001` to `0.002s` to execute, have been tested on R5 3600x and R7 7730U CPUs_

## verdict

Use

- Rust, for speed
- C++, for optimized size
- Go, if you hate yourself (or can't tolerate Rust syntax)

## contributing

You know something better? Do feel free to contribute additional languages, improvements or QoL changes to the repository.

Got different results? Open an issue, prove me wrong mathematically.
