// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D6A80 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100d6a80_100D6A80() {
    __asm {
        ; Exact mapped bytes 8B 41 64: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes C7 40 50 01 00 00 00: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
