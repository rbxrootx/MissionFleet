// The +0x1C field is used in coordinate clipping; its exact unit is unknown.
extern "C" unsigned int __attribute__((thiscall)) FUN_58907f30(
    const unsigned char* receiver) {
    return *reinterpret_cast<const unsigned int*>(receiver + 0x1C);
}
