#include "debug.h"

#include <cstdio>
#include <print>
#include <string_view>

void disassembleChunk(const Chunk& chunk, std::string_view name) {
    std::print("== {} ==\n", name);
    for (int offset = 0; offset < static_cast<int>(chunk.code.size());) {
        offset = disassembleInstruction(chunk, offset);
    }
}

static int simpleInstruction(std::string_view name, int offset) {
    std::print("{}\n", name);
    return offset + 1;
}

int disassembleInstruction(const Chunk& chunk, int offset) {
    std::print("{:04d}", offset);

    OpCode instruction = static_cast<OpCode>(chunk.code.at(offset));

    switch(instruction) {
        case OpCode::Return:
            return simpleInstruction("OP_RETURN", offset);
        default:
            std::print("Unknown opcode {}\n", static_cast<int>(instruction));
            return offset + 1;
    }
}

