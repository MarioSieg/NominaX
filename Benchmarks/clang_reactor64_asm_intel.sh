clang ../Source/Reactor.cpp -std=c++20 -c -S -o reactor.asm -fverbose-asm -Ofast -masm=intel -Wno-unknown-attributes -Wall -Wextra