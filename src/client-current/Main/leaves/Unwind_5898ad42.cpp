// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AD42 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898ad42() {
    __asm {
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes E8 F8 1E FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
