// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58887200 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58887200() {
    __asm {
        ; Exact mapped bytes 8B 8D 6C FF FF FF: mov ecx, dword ptr [ebp - 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A5 E6 F2 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xe6
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
