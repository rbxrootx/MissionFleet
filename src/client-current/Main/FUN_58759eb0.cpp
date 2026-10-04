// The receiver has a nullable nested pointer at +0x84. Its type is unknown.
extern "C" unsigned int __attribute__((thiscall)) FUN_58759eb0(
    const unsigned char* receiver) {
    const unsigned char* nested =
        *reinterpret_cast<const unsigned char* const*>(receiver + 0x84);
    return nested ? *reinterpret_cast<const unsigned int*>(nested + 4) : 0;
}
