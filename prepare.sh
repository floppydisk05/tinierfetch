#!/bin/sh

mkdir -p bin/

root_dir=$(pwd)

# 1. Build and copy Go binary
echo "Building and copying Go binary..."
cd go/
go build -ldflags="-s -w" -o ../bin/tinierfetch-go main.go
cd $root_dir

# 2. Build and copy Rust binary
echo "Building and copying Rust binary..."
cd rs/
cargo build --release
cp target/release/tinierfetch-rs ../bin/ -vf
cd $root_dir

# 3. Build and copy C++ binaries
echo "Building and copying C++ binaries..."
cd cpp/
make clean && make all &&
cp fetch_size fetch_speed ../bin/ -vf
cd $root_dir

# 4. Display binary sizes
echo "Binary Sizes:"
ls -lh bin/*

# 5. Benchmark binary speeds
echo "Benchmarking binary speeds..."
hyperfine -N --warmup 10000 'bin/tinierfetch-go' 'bin/tinierfetch-rs' 'bin/tinierfetch-cpp-size' 'bin/tinierfetch-cpp-speed' --export-markdown markdown.md

