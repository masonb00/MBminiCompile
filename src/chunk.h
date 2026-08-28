#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H

#include <cstddef>
#include <vector>
#include "common.h"

enum class OpCode : std::uint8_t{
    Return,
};

struct Chunk {
    //vector to hold opcode
    std::vector<std::byte> code;

    //default constructor
    Chunk();

    //custom constructor
    explicit Chunk(size_t initCap);

    //write function to append opcode
    void write (OpCode op);
};

#endif
