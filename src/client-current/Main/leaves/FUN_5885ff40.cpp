// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885FF40 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5885ff40() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ecx + 0a8h], eax
        mov eax, dword ptr [esp + 8]
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 66 8B 54 24 0C: mov dx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 91 C8 00 00 00: mov word ptr [ecx + 0xc8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
