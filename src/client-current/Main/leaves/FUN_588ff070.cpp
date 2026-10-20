// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FF070 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_588ff070() {
    __asm {
        ; Exact mapped bytes 8B 89 80 00 00 00: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 A9 FF FF: jmp 0x588f9a40
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
