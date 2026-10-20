// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896FE50 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5896fe50() {
    __asm {
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 8B 15 FC DF 9C 58: mov edx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        imul eax, dword ptr [esp + 8]
        imul edx, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 8]
        add eax, edx
        ; Exact mapped bytes 66 8B 54 24 0C: mov dx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
