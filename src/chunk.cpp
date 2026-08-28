#include <cstdlib>

#include "chunk.h"

Chunk::Chunk() = default;

Chunk::Chunk(size_t initCap) {
    code.reserve(initCap);
}

void Chunk::write (OpCode op) {
    code.push_back(static_cast<std::byte>(op));
}
