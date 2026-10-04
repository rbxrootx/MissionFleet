// ECX is the payload receiver visited by FUN_588DE5C0.
// The three field meanings remain unknown.
extern "C" void __attribute__((thiscall)) FUN_5873a370(
    unsigned char* receiver) {
    *reinterpret_cast<unsigned int*>(receiver + 0x470) = 0;
    *reinterpret_cast<unsigned int*>(receiver + 0x4C8) = 5;
    *reinterpret_cast<unsigned int*>(receiver + 0x31C) = 3;
}
