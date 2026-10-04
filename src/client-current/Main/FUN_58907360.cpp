// Synchronize two child values, then rebuild its derived state.
extern "C" void __attribute__((thiscall)) FUN_58907040(unsigned char* receiver);

extern "C" void __attribute__((thiscall)) FUN_58907360(
    unsigned char* receiver, unsigned int value) {
    *reinterpret_cast<unsigned int*>(receiver + 0x64) = value;
    *reinterpret_cast<unsigned int*>(receiver + 0x60) = value;
    FUN_58907040(receiver);
}
