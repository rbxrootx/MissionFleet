// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588911E8 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588911e8() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 64: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        ; Exact mapped bytes E9 ED 65 BF FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x65
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
