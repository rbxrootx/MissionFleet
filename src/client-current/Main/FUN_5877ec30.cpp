// Parallel child pair with different receiver offsets; object types unknown.
extern "C" void __attribute__((thiscall)) FUN_58907360(
    unsigned char* receiver, unsigned int value);

extern "C" void __attribute__((thiscall)) FUN_5877ec30(
    unsigned char* receiver, unsigned int delta) {
    unsigned char* owner;
    // Preserve the original mov esi,ecx encoding (8B F1 rather than 89 CE).
    __asm__ __volatile__(".byte 0x8b, 0xf1" : "=S"(owner) : "c"(receiver));
    unsigned char* first =
        *reinterpret_cast<unsigned char**>(owner + 0x10BE0);
    unsigned int value = *reinterpret_cast<unsigned int*>(first + 0x64);
    FUN_58907360(first, value + delta);

    first = *reinterpret_cast<unsigned char**>(owner + 0x10BE0);
    // Retain the original ECX/EDX value-load order before the second call.
    __asm__ __volatile__("" : "+c"(first));
    value = *reinterpret_cast<unsigned int*>(first + 0x64);
    __asm__ __volatile__("" : "+d"(value));
    unsigned char* second =
        *reinterpret_cast<unsigned char**>(owner + 0x10BF4);
    FUN_58907360(second, value);
}
