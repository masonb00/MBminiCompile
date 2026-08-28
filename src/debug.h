#ifndef CLOX_DEBUG_H
#define CLOX_DEBUG_H

#include <string_view>
#include "chunk.h"

void disassembleChunk(Chunk chunk, std::string_view name);
int disassembleInstruction(Chunk chunk, int offset);

#endif
