// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F220 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888f220() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 48 5C EB FF: jmp 0x58744e70
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x5c
        __asm _emit 0xeb
        __asm _emit 0xff
    }
}
