// The stored accumulator is XOR encoded; its game-level units are unknown.
extern "C" unsigned int __attribute__((thiscall)) FUN_5877ebb0(
    unsigned char* receiver, unsigned int delta) {
    unsigned int* encoded = reinterpret_cast<unsigned int*>(receiver + 0x1264);
    unsigned int decoded = *encoded;
    // Keep the original load-before-XOR encoding; plain C++ reverses it.
    __asm__ __volatile__("" : "+a"(decoded));
    const unsigned int updated = ((decoded ^ 0xAAAAAAAAu) + delta) ^ 0xAAAAAAAAu;
    *encoded = updated;
    return updated;
}
