// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891260 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891260() {
    __asm {
        ; Exact mapped bytes 8B 8D EC FE FF FF: mov ecx, dword ptr [ebp - 0x114]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 46 F2 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x46
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
