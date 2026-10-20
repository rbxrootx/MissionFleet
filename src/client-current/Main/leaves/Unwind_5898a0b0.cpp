// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A0B0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898a0b0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 48 DB F6 FF: jmp 0x588f7c00
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xdb
        __asm _emit 0xf6
        __asm _emit 0xff
    }
}
