// The +0x20 field is used in coordinate clipping; its exact unit is unknown.
extern "C" unsigned int __attribute__((thiscall)) FUN_58907f40(
    const unsigned char* receiver) {
    return *reinterpret_cast<const unsigned int*>(receiver + 0x20);
}
