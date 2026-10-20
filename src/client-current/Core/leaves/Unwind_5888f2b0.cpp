// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F2B0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888f2b0() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 B8 5B EB FF: jmp 0x58744e70
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xff
    }
}
