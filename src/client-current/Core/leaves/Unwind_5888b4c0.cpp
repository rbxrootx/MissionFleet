// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B4C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b4c0() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 08 A3 F2 FF: jmp 0x587b57d0
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
