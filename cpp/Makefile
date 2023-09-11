# Compiler
CXX = g++

# Source files
SOURCES = tinierfetch.cpp

# Output binaries
OUTPUT_SIZE = tinierfetch-cpp-size
OUTPUT_SPEED = tinierfetch-cpp-speed

# Compiler flags for size optimization
CXXFLAGS_SIZE = -Os -ffunction-sections -fdata-sections \
                -fno-exceptions -fno-stack-protector -fno-rtti \
                -ffunction-sections -fdata-sections -fno-math-errno \
                -fno-unroll-loops -fmerge-all-constants -fno-ident \
                -mfpmath=387 -mfancy-math-387 -s -flto \
                -fno-asynchronous-unwind-tables -fsingle-precision-constant

# Compiler flags for speed optimization
CXXFLAGS_SPEED = -O3 -march=native -funroll-loops -finline-functions \
                -ffast-math -fno-exceptions -fno-stack-protector -fno-rtti \
                -ffunction-sections -fdata-sections -fno-math-errno \
                -fmerge-all-constants -fno-ident -mfpmath=387 \
                -mfancy-math-387 -s -flto -fno-asynchronous-unwind-tables \
                -fsingle-precision-constant

# Linker flags (common for both targets)
LDFLAGS = -Wl,-z,norelro -Wl,--hash-style=gnu -Wl,--build-id=none -Wl,--strip-all

# Makefile targets
all: optimize-size optimize-speed

optimize-size: $(OUTPUT_SIZE)

optimize-speed: $(OUTPUT_SPEED)

$(OUTPUT_SIZE): $(SOURCES)
	$(CXX) $(CXXFLAGS_SIZE) $(LDFLAGS) $(SOURCES) -o ../bin/$(OUTPUT_SIZE)

$(OUTPUT_SPEED): $(SOURCES)
	$(CXX) $(CXXFLAGS_SPEED) $(LDFLAGS) $(SOURCES) -o ../bin/$(OUTPUT_SPEED)

clean:
	rm -f $(OUTPUT_SIZE) $(OUTPUT_SPEED)

.PHONY: all optimize-size optimize-speed clean
