#include "common.h"
#include "chunk.h"
#include "debug.h"

int main (int argc, const char* argv[]) {
    Chunk chunk;
    chunk.write(OpCode::Return);
    disassembleChunk(chunk, "test chunk");

    return 0;
}
