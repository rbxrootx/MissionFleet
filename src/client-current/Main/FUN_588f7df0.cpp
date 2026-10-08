// Reconstructed from the fresh Ghidra body at 0x588F7DF0.
// Sets the low four state bits on the child stored at receiver offset +0xA8.
extern "C" void __fastcall FUN_588f7df0(void* param_1) {
    auto* self = static_cast<unsigned char*>(param_1);
    auto* child = *reinterpret_cast<unsigned char**>(self + 0xA8);
    *reinterpret_cast<unsigned short*>(child + 0x24) |= 0x0F;
}
