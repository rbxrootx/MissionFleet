// Receiver +8 is a three-state field; its domain label is unknown.
extern "C" void __attribute__((thiscall)) FUN_587afe50(unsigned char* receiver) {
    *reinterpret_cast<unsigned int*>(receiver + 8) = 2;
}
